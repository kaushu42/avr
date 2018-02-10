/****************************************
	Created By - Kaushal Raj Mishra
*****************************************/
	/*USAGE*/
// If you only want to use a single pin for PWM, define PWM_1A or PWM_1B as a macro
// If you don't define them, both pins will function as PWM pins.
// If you define PWM_1B or PWM_1A, to write pwm, use pwm_write(value) else use pwm_writeA() or pwm_writeB()

#ifndef PWM_H
#define PWM_H
#include <avr/io.h>
#define PWM_A 0
#define PWM_B 1

//Put your calculated value for ICR here
#define ICR_VALUE 249
void pwm_init();
void pwm_write(uint8_t value);
void pwm_writeA(uint8_t value);
void pwm_writeB(uint8_t value);

#endif
