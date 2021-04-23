# Activity1 In Action

### Heater Led Status 
| LED ON | LED OFF |
| :--: | :--: |
|![LED ON](simulation/LED_ON.png)|![LED OFF](simulation/LED_OFF.png)|


### Code 
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