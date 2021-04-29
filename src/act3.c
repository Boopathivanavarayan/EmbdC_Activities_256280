/**
 * @file act3.c
 * @author Boopathi Vanavarayan 
 * @brief Activity3: Generating diffierent PWM for different levels of temperature
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act3.h"
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief This function generate PWM signal with specified percentage duty cycle
 * 
 * @note CF = 16MHz
 * @note Prescaller = 256
 * @note F = 16MHz/256 = 62500Hz
 * @note T = 1/F = 0.000016s
 * @note 8 bit counter register max value is 255
 * @note Compare value for % duty cycle is 255*duty_cycle(%)-1 
 */
int pwm=0;
int act3(int pwm){
    PWM_Init();
    int comp = pwm*0.01*255 - 1;
    while(1){
        OCR0A = comp;
        _delay_ms(200);
        return 1;
    }

}