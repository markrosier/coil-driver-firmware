/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef DRIVER_INIT_INCLUDED
#define DRIVER_INIT_INCLUDED

#include "atmel_start_pins.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <hal_atomic.h>
#include <hal_delay.h>
#include <hal_gpio.h>
#include <hal_init.h>
#include <hal_io.h>
#include <hal_sleep.h>

#include <hal_i2c_s_async.h>
#include <hal_timer.h>
#include <hal_pwm.h>
#include <hpl_tc_base.h>
#include <hal_pwm.h>
#include <hpl_tc_base.h>
#include <hal_pwm.h>
#include <hpl_tc_base.h>

#include <hal_pwm.h>
#include <hpl_tcc.h>

#include <hal_pwm.h>
#include <hpl_tcc.h>

#include <hal_pwm.h>
#include <hpl_tcc.h>

#include <hal_wdt.h>

#define SERCOM1_I2CS_BUFFER_SIZE 16

extern struct i2c_s_async_descriptor I2C_0;
extern struct timer_descriptor       TIMER_0;

extern struct pwm_descriptor PWM_2;

extern struct pwm_descriptor PWM_4;

extern struct pwm_descriptor PWM_5;

extern struct pwm_descriptor PWM_1;

extern struct pwm_descriptor PWM_3;

extern struct pwm_descriptor PWM_0;

extern struct wdt_descriptor WDT_0;

void I2C_0_PORT_init(void);
void I2C_0_CLOCK_init(void);
void I2C_0_init(void);

void PWM_2_PORT_init(void);
void PWM_2_CLOCK_init(void);
void PWM_2_init(void);

void PWM_4_PORT_init(void);
void PWM_4_CLOCK_init(void);
void PWM_4_init(void);

void PWM_5_PORT_init(void);
void PWM_5_CLOCK_init(void);
void PWM_5_init(void);

void PWM_1_PORT_init(void);
void PWM_1_CLOCK_init(void);
void PWM_1_init(void);

void PWM_3_PORT_init(void);
void PWM_3_CLOCK_init(void);
void PWM_3_init(void);

void PWM_0_PORT_init(void);
void PWM_0_CLOCK_init(void);
void PWM_0_init(void);

void WDT_0_CLOCK_init(void);
void WDT_0_init(void);

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

#ifdef __cplusplus
}
#endif
#endif // DRIVER_INIT_INCLUDED
