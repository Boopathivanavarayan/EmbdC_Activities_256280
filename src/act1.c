/**
 * @file act1.c
 * @author Boopathi Vanavarayan 
 * @brief Activity1: Status of Heater Led Actuator based on Button sensor and Heater switch input 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "act1.h"
#include <avr/io.h>
#include <util/delay.h>


unsigned volatile FLAG1 = 0; // button sensor at driver seat
unsigned volatile FLAG2 = 0; // heater switch
unsigned volatile HEATER_LED_STATUS = 0;
/**
 * @brief Activity 1 Function
 * 
 * @return int Return 1 if LED Actuator is ON else Return 0
 * @note HEATER_LED TURNS ON FOR ON CONDITIONS OF BOTH SPDT SWITCHES BUTTON_SW and HEATER_SW  
 * @note HEATER_LED TURNS OFF FOR OTHER CONDITIONS OF SPDT SWITCHES BUTTON_SW and HEATER_SW  
 */
void act1(void)
{
	/* Initialize Peripherals */
	PeripheralInit();

	while(1){
        FLAG1 = !(PIND & (1<< BUTTON_SW));
        FLAG2 = !(PIND & (1<< HEATER_SW));
        if(FLAG1 & FLAG2){
            _delay_ms(20);
            PORTB |= (1<< HEATER_LED);
            HEATER_LED_STATUS = 1;
        }
        else{
            PORTB &= ~(1<< HEATER_LED);
            HEATER_LED_STATUS = 0;
        }
    }
    
}
