#ifndef ADC_H
#define ADC_H

//Initialize the ADC
void adc_init(){
	ADMUX = (1<<REFS0);
  	ADCSRA = (1<<ADEN);
}

//Read ADC value from the desired channel. 0 <= Channel <= 7
uint8_t read(uint8_t channel){
	channel &= 0x07;
	ADMUX |= channel;
	ADCSRA |= 1<<ADSC;
	while(!(ADCSRA & 1<<ADIF));
	ADCSRA |= 1<<ADIF;
	return(ADC);
}

#endif
