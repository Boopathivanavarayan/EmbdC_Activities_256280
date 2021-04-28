#include <avr/io.h>

void USARTInit(int ubrr_value){
    //SET BAUD RATE
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0X00FF);
    UCSR0C = (1<<UMSEL00)|(UCSZ01)|(UCSZ00);

    //ENABLE THE RECEIVER AND TRANSMITTER
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}