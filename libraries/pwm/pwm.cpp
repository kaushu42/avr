/****************************************
	Created By - Kaushal Raj Mishra
*****************************************/
	/*USAGE*/
// If you only want to use a single pin for PWM, define PWM_1A or PWM_1B as a macro
// If you don't define them, both pins will function as PWM pins.
// If you define PWM_1B or PWM_1A, to write pwm, use pwm_write(value) else use pwm_writeA() or pwm_writeB()
#include "pwm.h"
void pwm_init(){
	TCCR1A |= (1<<COM1A1)|(1<<COM1A0)|(1<<COM1B1)|(1<<COM1B0)|(1<<WGM11);
	TCCR1B |= (1<<CS10)|(1<<WGM12)|(1<<WGM13);
	DDRD |= (1 << PD5) | (1 << PD4);
	ICR1 = ICR_VALUE;
}
void pwm_writeA(uint8_t value){
  OCR1A = ICR_VALUE - value;
}
void pwm_writeB(uint8_t value){
  OCR1B = ICR_VALUE - value;
}
