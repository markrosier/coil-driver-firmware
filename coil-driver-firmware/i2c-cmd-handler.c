#include "atmel_start.h"
#include "i2c-cmd-handler.h"
#include "switch-handler.h"
#include "driver_init.h"
#include "version.h"

static struct io_descriptor *io;

uint8_t data[64];
uint8_t dataIndex = 0;

uint16_t result = 0x7000;
bool i2cFailed = false;

bool i2cFailure(void)
{
	return i2cFailed;
}

void i2cSWReset( void )
{
	i2cFailed = false;

	I2C_0_init();
	i2cCommandHandlerInit();
}



uint8_t geti2cAddress( void )
{
	uint8_t config = ((gpio_get_pin_level(BoardID1) << 1) |
					  (gpio_get_pin_level(BoardID2) << 2) |
					  (gpio_get_pin_level(BoardID3) << 3));
	return ( 0x20 + config); 
	
}

// this interrupt occurs when a stop condition is detected
static void I2C_0_prec(const struct i2c_s_async_descriptor *const descr)
{
		
#define CMD_BYTES 2
	// read only command1 & command2 bytes.
	// fetch any more arguments in the command handling.
	io_read(io, data, CMD_BYTES);
	uint8_t i2cFunction = data[CMD1_BYTE] & 0b11100000;  // top 3 bits define the command
	switch (i2cFunction)
	{
		case I2C_LED_COMMAND: // @deprecated
		{
			io_read(io, data+CMD_BYTES, 3); // old LED command only, reading 1 x rgb value
		}
		break;

		case I2C_SWITCH_COMMAND:
		{
			result = getLatchedSwitchesBlockState(data[CMD2_BYTE]);
		}
		break;

			
		case I2C_SPECIAL_COMMAND:
		{
			uint8_t aSpecialCommand = (data[CMD1_BYTE] & I2C_COMMAND_MASK);
			switch(aSpecialCommand)
			{
				case I2C_FWID_COMMAND: // return firmware version
					result = ((uint16_t)MAJOR_FW_VERSION << 8) | MINOR_FW_VERSION;
					break;

				case I2C_ADDR_COMMAND: // return processor version & I2C address
					result = (uint16_t)((0x0 << 8) | geti2cAddress());
					break;
					
				case I2C_HRDW_COMMAND: // return hardware version
					result = 1;
					break;

			}
		}
		break;

		default:
			// do nothing
		break;
	}
}

uint8_t dOut[4];
static void I2C_0_tx_pending(const struct i2c_s_async_descriptor *const descr)
{
	dOut[0] = (uint8_t)  result & 0x00ff;
	dOut[1] = (uint8_t)((result & 0xff00) >> 8);
	dOut[2] = dOut[1] ^ dOut[0];
	io_write(io, dOut, 4);  // MR I don't know why it has to be 4 but 3 doesnt work
	dataIndex = 0;
}


static void I2C_0_error(const struct i2c_s_async_descriptor * const descr) 
{
	
	hri_sercomi2cm_set_CTRLA_SWRST_bit(descr->device.hw);
	hri_sercomi2cm_clear_INTFLAG_reg(descr->device.hw, 0xff);
	i2cFailed = true;
}


void i2cCommandHandlerInit(void)
{
	i2c_s_async_get_io_descriptor(&I2C_0, &io);
	i2c_s_async_register_callback(&I2C_0, I2C_S_PREC, I2C_0_prec);
	i2c_s_async_register_callback(&I2C_0, I2C_S_TX_PENDING, I2C_0_tx_pending);
	i2c_s_async_register_callback(&I2C_0, I2C_S_ERROR, I2C_0_error);
	i2c_s_async_enable(&I2C_0);
	i2c_s_async_set_addr(&I2C_0, geti2cAddress());
}

