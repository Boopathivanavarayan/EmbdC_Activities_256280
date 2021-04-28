#include "act2.h"
#include <avr/io.h>

/**
 * @brief This function Read the ADC register values from specified channels
 * 
 * @param ch: ADC Channels 0-7 
 * @return uint16_t 
 */
int ReadADC(unsigned volatile int ch){
     //Read ADC channel ch from 0-7
     ADMUX  &= 0xf8;
     ch = ch & 0b00000111;
     ADMUX |= ch;
     //Do single conversion
     ADCSRA |= (1<< ADSC);
     //Wait for the conversion
     while(!((ADCSRA & (1<< ADIF))));
     //Clear ADIF by writing 1 to it
     ADCSRA |= (1<< ADIF);
     return(ADC);
}