#include "act2.h"
#include <avr/io.h>

/**
 * @brief Initialises Analog to Digital Conversion
 * 
 */
void InitADC(void){
    ADMUX = (1<< REFS0); // AREF = 5V
    ADCSRA = (1<< ADEN)|(7<< ADPS0); //ADC Enable 128 Prescaling
}