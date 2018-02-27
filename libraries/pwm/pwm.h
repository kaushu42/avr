/****************************************
	Created By - Kaushal Raj Mishra
*****************************************/
//Use pwm_writeA (or pwm_writeB) to write values to OCR1A and OCR1B respectively
#ifndef PWM_H
#define PWM_H
#include <avr/io.h>

//Put your calculated value for ICR here
#define ICR_VALUE 249 //For 8KHz PWM
void pwm_init();
void pwm_writeA(uint8_t value);
void pwm_writeB(uint8_t value);

#endif
