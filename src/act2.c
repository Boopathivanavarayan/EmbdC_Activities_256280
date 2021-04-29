
/**
 * @file act2.c
 * @author Boopathi Vanavarayan 
 * @brief Activity2: reading analog values from set temperature slider potentiometer  
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act2.h"
#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief Activity 2 Function
 * 
 * @return uint16_t Return ADC value
 * @note For 5V the resolution is 1024
 * @note Then for 1 resolution it's 0.0048828125V
 * @note ADC Value of Temp Sensor    Temp    Required Voltage    
 * @note 0-200                        20C        0-0.98V
 * @note 210-500                      40C        1.02-2.44V
 * @note 510-700                      70C        2.49-3.42V
 * @note 710-1024                     95C        3.47-5V 
  
 */
unsigned volatile int temp;
unsigned volatile int act2()
{
    
    unsigned volatile int ch = SLIDER_CH;
    while(1){
        temp = ReadADC(ch);
        _delay_ms(20);
        return temp;
    }
}