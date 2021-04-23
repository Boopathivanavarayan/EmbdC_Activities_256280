# Activity1 In Action

#### Heater Led Status 
| LED ON | LED OFF |
| :--: | :--: |
|![LED ON](https://github.com/Boopathivanavarayan/EmbdC_Activities_256280/blob/main/Activity1/simulation/LED_ON.PNG)|![LED OFF](https://github.com/Boopathivanavarayan/EmbdC_Activities_256280/blob/main/Activity1/simulation/LED_OFF.PNG)|


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