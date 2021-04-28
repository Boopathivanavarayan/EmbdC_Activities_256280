#include "act1.h"
#include <avr/io.h>
/**
 * @brief Initialize all the Peripherals and pin configurations 
 * 
 */
void PeripheralInit()
{
	/* Configure LED Pin */
	DDRD &= ~(1<< BUTTON_SW) & ~(1<< HEATER_SW); 
    DDRB |= (1<< HEATER_LED); 
    PORTD |= (1<< BUTTON_SW) | (1<< HEATER_SW );

}
