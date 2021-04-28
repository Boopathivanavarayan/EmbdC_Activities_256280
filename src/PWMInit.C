#include "act3.h"
#include <avr/io.h>
/**
 * @brief Initializing PWM mode of Atmega328
 * 
 */

void PWMInit(void){
     TCCR0A |= (1<< COM0A1)|(1<<WGM01)|(1<<WGM00);//SET NON INVERTING FAST PWM MODE
     TCCR0B |= (1<<CS02);//PRESCALING OF 256
     DDRD |= (1<<PD6);// SET DIRECTION
}