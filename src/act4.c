/**
 * @file act4.c
 * @author Boopathi Vanavarayan 
 * @brief Activity4: Sending temperature values via UART 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act4.h"
#include <avr/io.h>

/**
 * @brief This function transmit the int data via UART
 * 
 * @param data : Int value of data to be sent via UART
 */
void USARTWriteInt(int data){
    //WAIT UNTILL TTRANSMITTER IS READY
    while(!(UCSR0A & (1<<UDRE0))){
        //DO NOTHING
    }
    //NOW WRITE THE DATA TO UART BUFFER
    UDR0 = data;
}

/**
 * @brief This function send specific temperature values corresponding to each pwm duty cycles 
 * 
 * @param pwm : Duty Cycle (%)
 */
void act4(int pwm)
{

    //ubrr_value = FC/16*baud_rate -1 = 103 when baud_rate= 9600
    USARTInit(103);
  
    if(pwm == 20){
        USARTWriteInt(20);
    }
    else if(pwm == 40){
        USARTWriteInt(25);
    }
    else if(pwm == 70){
        USARTWriteInt(29);
    }
    else if(pwm == 95){
        USARTWriteInt(33);
    }
    else{
        while(1){
            //do nothing
        }
    }

}