/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

#include <hpl_rtc_base.h>

struct timer_descriptor TIMER_0;

struct i2c_s_async_descriptor I2C_0;
uint8_t                       SERCOM1_i2c_s_buffer[SERCOM1_I2CS_BUFFER_SIZE];

struct pwm_descriptor PWM_2;

struct pwm_descriptor PWM_4;

struct pwm_descriptor PWM_5;

struct pwm_descriptor PWM_1;

struct pwm_descriptor PWM_3;

struct pwm_descriptor PWM_0;

struct wdt_descriptor WDT_0;

void I2C_0_PORT_init(void)
{

	gpio_set_pin_pull_mode(SDA,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(SDA, PINMUX_PA16C_SERCOM1_PAD0);

	gpio_set_pin_pull_mode(SCL,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(SCL, PINMUX_PA17C_SERCOM1_PAD1);
}

void I2C_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM1);
	_gclk_enable_channel(SERCOM1_GCLK_ID_CORE, CONF_GCLK_SERCOM1_CORE_SRC);
	_gclk_enable_channel(SERCOM1_GCLK_ID_SLOW, CONF_GCLK_SERCOM1_SLOW_SRC);
}

void I2C_0_init(void)
{
	I2C_0_CLOCK_init();
	i2c_s_async_init(&I2C_0, SERCOM1, SERCOM1_i2c_s_buffer, SERCOM1_I2CS_BUFFER_SIZE);
	I2C_0_PORT_init();
}

/**
 * \brief Timer initialization function
 *
 * Enables Timer peripheral, clocks and initializes Timer driver
 */
static void TIMER_0_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBA, RTC);
	_gclk_enable_channel(RTC_GCLK_ID, CONF_GCLK_RTC_SRC);
	timer_init(&TIMER_0, RTC, _rtc_get_timer());
}

void PWM_2_PORT_init(void)
{

	gpio_set_pin_function(PWM1, PINMUX_PA15E_TC3_WO1);
}

void PWM_2_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC3);
	_gclk_enable_channel(TC3_GCLK_ID, CONF_GCLK_TC3_SRC);
}

void PWM_2_init(void)
{
	PWM_2_CLOCK_init();
	PWM_2_PORT_init();
	pwm_init(&PWM_2, TC3, _tc_get_pwm());
}

void PWM_4_PORT_init(void)
{

	gpio_set_pin_function(PWM2, PINMUX_PA23E_TC4_WO1);
}

void PWM_4_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC4);
	_gclk_enable_channel(TC4_GCLK_ID, CONF_GCLK_TC4_SRC);
}

void PWM_4_init(void)
{
	PWM_4_CLOCK_init();
	PWM_4_PORT_init();
	pwm_init(&PWM_4, TC4, _tc_get_pwm());
}

void PWM_5_PORT_init(void)
{

	gpio_set_pin_function(PWM3, PINMUX_PA25E_TC5_WO1);
}

void PWM_5_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC5);
	_gclk_enable_channel(TC5_GCLK_ID, CONF_GCLK_TC5_SRC);
}

void PWM_5_init(void)
{
	PWM_5_CLOCK_init();
	PWM_5_PORT_init();
	pwm_init(&PWM_5, TC5, _tc_get_pwm());
}

void PWM_1_PORT_init(void)
{

	gpio_set_pin_function(PWM4, PINMUX_PA05E_TCC0_WO1);
}

void PWM_1_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TCC0);
	_gclk_enable_channel(TCC0_GCLK_ID, CONF_GCLK_TCC0_SRC);
}

void PWM_1_init(void)
{
	PWM_1_CLOCK_init();
	PWM_1_PORT_init();
	pwm_init(&PWM_1, TCC0, _tcc_get_pwm());
}

void PWM_3_PORT_init(void)
{

	gpio_set_pin_function(PWM5, PINMUX_PA07E_TCC1_WO1);
}

void PWM_3_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TCC1);
	_gclk_enable_channel(TCC1_GCLK_ID, CONF_GCLK_TCC1_SRC);
}

void PWM_3_init(void)
{
	PWM_3_CLOCK_init();
	PWM_3_PORT_init();
	pwm_init(&PWM_3, TCC1, _tcc_get_pwm());
}

void PWM_0_PORT_init(void)
{

	gpio_set_pin_function(PWM6, PINMUX_PA01E_TCC2_WO1);
}

void PWM_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TCC2);
	_gclk_enable_channel(TCC2_GCLK_ID, CONF_GCLK_TCC2_SRC);
}

void PWM_0_init(void)
{
	PWM_0_CLOCK_init();
	PWM_0_PORT_init();
	pwm_init(&PWM_0, TCC2, _tcc_get_pwm());
}

void WDT_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBA, WDT);
	_gclk_enable_channel(WDT_GCLK_ID, CONF_GCLK_WDT_SRC);
}

void WDT_0_init(void)
{
	WDT_0_CLOCK_init();
	wdt_init(&WDT_0, WDT);
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA00

	gpio_set_pin_level(ActiveLED1,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED1, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA02

	// Set pin direction to input
	gpio_set_pin_direction(BoardID1, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BoardID1,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BoardID1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA03

	// Set pin direction to input
	gpio_set_pin_direction(BoardID2, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BoardID2,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BoardID2, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA04

	// Set pin direction to input
	gpio_set_pin_direction(BoardID3, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BoardID3,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BoardID3, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA06

	// Set pin direction to input
	gpio_set_pin_direction(BDirect1, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect1,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA08

	gpio_set_pin_level(ActiveLED2,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED2, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED2, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA09

	gpio_set_pin_level(ActiveLED3,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED3, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED3, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA10

	gpio_set_pin_level(ActiveLED4,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED4, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED4, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA11

	gpio_set_pin_level(ActiveLED5,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED5, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED5, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA14

	gpio_set_pin_level(ActiveLED6,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ActiveLED6, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ActiveLED6, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA18

	// Set pin direction to input
	gpio_set_pin_direction(BDirect2, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect2,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect2, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA19

	// Set pin direction to input
	gpio_set_pin_direction(BDirect3, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect3,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect3, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA22

	// Set pin direction to input
	gpio_set_pin_direction(BDirect4, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect4,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect4, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA24

	// Set pin direction to input
	gpio_set_pin_direction(BDirect5, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect5,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect5, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA27

	// Set pin direction to input
	gpio_set_pin_direction(BDirect6, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BDirect6,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BDirect6, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA28

	gpio_set_pin_level(Alive,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Alive, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Alive, GPIO_PIN_FUNCTION_OFF);

	I2C_0_init();

	TIMER_0_init();

	PWM_2_init();

	PWM_4_init();

	PWM_5_init();

	PWM_1_init();

	PWM_3_init();

	PWM_0_init();

	WDT_0_init();
}
