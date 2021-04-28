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

int main(){
    act1();
    if(HEATER_LED_STATUS){
        act2();
        if(temp >= 0 && temp<= 200){
            act3(20);
            act4(20);
        }
        else if(temp >= 210 && temp <= 500){
            act3(40);
            act4(40);
        }
        else if(temp >= 510 && temp <= 700){
            act3(70);
            act4(70);
        }
        else if(temp >= 710 && temp <= 1024){
            act3(95);
            act4(95);
        }
    }
    return 0;
}
