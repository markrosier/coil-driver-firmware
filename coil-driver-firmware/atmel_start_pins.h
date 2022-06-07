/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD21 has 8 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7

#define ActiveLED1 GPIO(GPIO_PORTA, 0)
#define PWM6 GPIO(GPIO_PORTA, 1)
#define BoardID1 GPIO(GPIO_PORTA, 2)
#define BoardID2 GPIO(GPIO_PORTA, 3)
#define BoardID3 GPIO(GPIO_PORTA, 4)
#define PWM4 GPIO(GPIO_PORTA, 5)
#define BDirect1 GPIO(GPIO_PORTA, 6)
#define PWM5 GPIO(GPIO_PORTA, 7)
#define ActiveLED2 GPIO(GPIO_PORTA, 8)
#define ActiveLED3 GPIO(GPIO_PORTA, 9)
#define ActiveLED4 GPIO(GPIO_PORTA, 10)
#define ActiveLED5 GPIO(GPIO_PORTA, 11)
#define ActiveLED6 GPIO(GPIO_PORTA, 14)
#define PWM1 GPIO(GPIO_PORTA, 15)
#define SDA GPIO(GPIO_PORTA, 16)
#define SCL GPIO(GPIO_PORTA, 17)
#define BDirect2 GPIO(GPIO_PORTA, 18)
#define BDirect3 GPIO(GPIO_PORTA, 19)
#define BDirect4 GPIO(GPIO_PORTA, 22)
#define PWM2 GPIO(GPIO_PORTA, 23)
#define BDirect5 GPIO(GPIO_PORTA, 24)
#define PWM3 GPIO(GPIO_PORTA, 25)
#define BDirect6 GPIO(GPIO_PORTA, 27)
#define Alive GPIO(GPIO_PORTA, 28)

#endif // ATMEL_START_PINS_H_INCLUDED
