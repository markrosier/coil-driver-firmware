#ifndef _inc_timers
#define _inc_timers

//*****************************************************************************
//
//  Timer.h
//
// Iota Electronics Limited 2018
// 
//*****************************************************************************

#include <stdint.h>

#define	EXPIRED	0
#define MAX_TIMERS	16
#define LOCKED_TIMER 0xFFFFFFFF

typedef uint8_t TTimerIndex;

extern void timerInit( void );
extern TTimerIndex timerGet( void );
extern void timerSet( TTimerIndex Index, uint32_t Duration );
extern uint32_t timerRead( TTimerIndex Index );
extern void timerLock( TTimerIndex Index );
extern void timerDelay( uint32_t Duration );

void sysTickHandler( void );
void LEDTickHandler(void);

#endif
