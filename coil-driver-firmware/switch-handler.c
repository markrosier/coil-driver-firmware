#include <atmel_start.h>
#include "switch-handler.h"
#include "utils.h"
#include "conv.h"

static struct timer_task switchHandlerTimerTask;

#define BLOCK_COUNT 1
#define BLOCK_GPIO_PORTA 0

#define SWITCH_COUNT 6


#define DEBOUNCE_RETRIES_QUICK	2
#define DEBOUNCE_RETRIES_NORMAL	3
// how many samples we need to call a state stable and therefore debounced
int16_t debounceRetries = DEBOUNCE_RETRIES_NORMAL;

struct sSwitches {
	int16_t debounceCounter; // debounce status, counting down from debounceRetries to 0
	bool lastDebouncedState; // the last state we were able to debounce
} switches[BLOCK_COUNT][SWITCH_COUNT]; // each block has switches



uint16_t getLatchedSwitchesBlockState(uint8_t aBlock)
{
	uint16_t retVal = 0;
	if(aBlock < BLOCK_COUNT)
	{
		for (uint8_t i=0; i<SWITCH_COUNT; i++)
		{
			// give the last debounced state back to the controller
			if(switches[aBlock][i].lastDebouncedState)
				retVal |= (1 << i);
			
			// start looking for a state change if we were debounced
			if(switches[aBlock][i].debounceCounter == 0)
				switches[aBlock][i].debounceCounter = debounceRetries;
		}
	}
	return retVal;
}

void switchHandlerInit(void)
{
	for(uint8_t aBlock=0; aBlock<BLOCK_COUNT; aBlock++)
	{
		for (uint8_t aSwitch=0; aSwitch<SWITCH_COUNT; aSwitch++)
		{
			// set an arbitrary initial value, it will be correct after debounceRetries
			switches[aBlock][aSwitch].lastDebouncedState = false;
			// start debouncing to make sure we see any change
			switches[aBlock][aSwitch].debounceCounter = debounceRetries;
		}
	}
	switchHandlerTimerTask.interval = 1;
	switchHandlerTimerTask.cb       = switchHandler;
	switchHandlerTimerTask.mode     = TIMER_TASK_REPEAT;
	timer_add_task(&TIMER_0, &switchHandlerTimerTask);
	timer_start(&TIMER_0);

}

void updateSwitch(uint8_t aBlock, uint8_t aSwitchIndex, bool aCurrentSwitchState)
{
	if(aBlock < BLOCK_COUNT && aSwitchIndex < SWITCH_COUNT)
	{
		struct sSwitches *aSwitch = &(switches[aBlock][aSwitchIndex]);
		if(aSwitch != NULL)
		{
			if(aSwitch->debounceCounter > 0)
			{
				// is the current state different than the last reported one?
				if(aSwitch->lastDebouncedState != aCurrentSwitchState)
				{
					aSwitch->debounceCounter--;
					// can we finally keep our new state because we are fully debounced?
					if(aSwitch->debounceCounter == 0)
					{
						// save the fully debounced state
						aSwitch->lastDebouncedState = aCurrentSwitchState;
					}
				}
				else // current state is the same as last reported, restart any begun debounce
					aSwitch->debounceCounter = debounceRetries;
			}
		}
	}
}

void switchHandler(const struct timer_task *const timer_task)
{
	gpio_toggle_pin_level(Alive);

	// BLOCK 0 - direct connected switches
	uint32_t mcuPort = gpio_get_port_level(GPIO_PORTA);
	uint16_t directSwitches = (uint16_t)(((mcuPort & 0x00000040) >> 6) | ((mcuPort & 0x00040000) >> 17) | ((mcuPort & 0x00080000) >> 17) | ((mcuPort & 0x00400000) >> 19)  | ((mcuPort & 0x01000000) >> 20)  | ((mcuPort & 0x08000000) >> 22));
	for (uint8_t i=0; i<SWITCH_COUNT; i++)
	{
		bool aCurrentSwitchState = ((directSwitches >> i) & 1 ? true : false);
		updateSwitch(BLOCK_GPIO_PORTA, i, aCurrentSwitchState);
	}
}
