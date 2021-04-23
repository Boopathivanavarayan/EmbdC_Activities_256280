# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|\image html ON.png||

## Code 
```
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
```