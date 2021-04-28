#include "act4.h"
#include <avr/io.h>


void USARTWriteInt(int data){
    //WAIT UNTILL TTRANSMITTER IS READY
    while(!(UCSR0A & (1<<UDRE0))){
        //DO NOTHING
    }
    //NOW WRITE THE DATA TO UART BUFFER
    UDR0 = data;
}


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

}