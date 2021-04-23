/**
 * @file project_main.c
 * @author Bopathi vanavarayan ()
 * @brief Activity1: Button switch input and Heater switch input deciding status of Heater Led 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "act1.h"

unsigned volatile FLAG1 = 0; // button sensor at driver seat
unsigned volatile FLAG2 = 0; // heater switch

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRD &= ~(1<< BUTTON_SW) & ~(1<< HEATER_SW); 
    DDRB |= (1<< HEATER_LED); 
    PORTD |= (1<< BUTTON_SW) | (1<< HEATER_SW );

}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note HEATER_LED TURNS ON FOR ON CONDITIONS OF BOTH SPDT SWITCHES BUTTON_SW and HEATER_SW  
 * @note HEATER_LED TURNS OFF FOR OTHER CONDITIONS OF SPDT SWITCHES BUTTON_SW and HEATER_SW  
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1){
        FLAG1 = !(PIND & (1<< BUTTON_SW));
        FLAG2 = !(PIND & (1<< HEATER_SW));
        if(FLAG1 & FLAG2){
            _delay_ms(20);
            PORTB |= (1<< HEATER_LED);
        }
        else{
            PORTB &= ~(1<< HEATER_LED);
        }
    }

	return 0;
}
