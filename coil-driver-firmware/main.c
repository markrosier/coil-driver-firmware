#include <atmel_start.h>
#include "switch-handler.h"
#include "i2c-cmd-handler.h"
#include "timer.h"

int main(void)
{
	/* Initializes MCU, drivers and middle-ware */
	atmel_start_init();
	switchHandlerInit();
	timerInit();
	i2cSWReset();


	/* Replace with your application code */
	while (1) {
		// check for communications errors
		if(i2cFailure())
		{
			i2cSWReset();
		}
	}
}
