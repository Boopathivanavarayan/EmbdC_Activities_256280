/**
 * @file SeatHeatingApp.c
 * @author Boopathi Vanavarayan 
 * @brief Case Study that combine all four activities.
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "act1.h"
#include "act2.h"
#include "act3.h"
#include "act4.h"
#include <avr/io.h>

int main(){
   unsigned volatile int temp_in_ADC;
   while(1)
   {
       if(act1()){
           temp_in_ADC = act2();
           if( temp_in_ADC >= 0 && temp_in_ADC<= 200){
               if(act3(20))
                act4(20);
            }
            else if(temp_in_ADC >= 210 && temp_in_ADC <= 500){
            if(act3(40))
                act4(40);
            }
            else if(temp_in_ADC >= 510 && temp_in_ADC <= 700){
            if(act3(70))
                act4(70);
            }
            else if(temp_in_ADC >= 710 && temp_in_ADC <= 1024){
            if(act3(95))
                act4(95);
            }
       }
       else{
           ADC = 0;
           DDRD &= ~(1<<PD6);
       }
   }
   
    return 0;
}
