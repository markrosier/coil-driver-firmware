//*****************************************************************************
//
//  timer.c
//
//  Iota Electronics Ltd (2018)
//
//*****************************************************************************

#include <atmel_start.h>
#include "timer.h"

uint32_t timers[MAX_TIMERS];
uint32_t delayTimer;
uint8_t numTimers = 0;

static struct timer_task ledTimerTask;

static void LEDTimerCB (const struct timer_task *const timer_task)
{
	if( (delayTimer != 0) )
	{
		delayTimer--;
	}

	for( uint8_t i=0; i<numTimers; i++ )
	{
		if(timers[i] != 0 && timers[i] != LOCKED_TIMER)
		{
			timers[i]--;
		}
	}
}

void timerInit( void )
{

	ledTimerTask.interval = 1;
	ledTimerTask.cb       = LEDTimerCB;
	ledTimerTask.mode     = TIMER_TASK_REPEAT;

	timer_add_task(&TIMER_0, &ledTimerTask);
	timer_start(&TIMER_0);
}


//*****************************************************************************
//*	Function:	timerGet
//*	Arguments:	None
//*	Action:		Assign the next timer
//*	Returns:	TTimerIndex - the timer id
//*****************************************************************************
TTimerIndex timerGet( void )
{
  TTimerIndex result;

  result = numTimers;
  numTimers++;
  timerLock( result );
  return( result );
}

//*****************************************************************************
//*	Function:	timerSet
//*	Arguments:	
//*				TTimerIndex Index - the timer id
//*				WORD Duration - required duration (ms)
//*	Action:		Set the specified timer
//*	Returns:	None
//*****************************************************************************
void timerSet( TTimerIndex index, uint32_t duration )
{
  if( index < numTimers )
  {
    timers[index] = duration;
  }
}

//*****************************************************************************
//*	Function:	timerRead
//*	Arguments:	
//*				TTimerIndex Index - the timer id
//*	Action:		Read remaining time for the specified timer
//*	Returns:	Duration - remaining duration (ms)
//*****************************************************************************
uint32_t timerRead( TTimerIndex index )
{
  uint32_t result = LOCKED_TIMER;
  if( index < numTimers )
  {
    result = timers[index];
  }
  return( result );
}

//*****************************************************************************
//*	Function:	timerLock
//*	Arguments:	
//*				TTimerIndex Index - the timer id
//*	Action:		Lock the specified timer
//*	Returns:	None
//*****************************************************************************
void timerLock( TTimerIndex index )
{
  if( index < numTimers )
  {
    timers[index] = LOCKED_TIMER;
  }
}

//*****************************************************************************
//*	Function:	timerDelay
//*	Arguments:	
//*			WORD Duration - required duration (ms)
//*	Action:		Blocking delay
//*	Returns:	None
//*****************************************************************************
void timerDelay( uint32_t duration )
{
  delayTimer = duration;
  while( delayTimer != 0)
  {
      continue;
  }
}

