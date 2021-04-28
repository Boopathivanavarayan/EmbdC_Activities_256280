#ifndef __ACT1_H_
#define __ACT1_H_
/**
 * @file act1.h
 * @author Boopathi Vanavarayan
 * @brief Project to set the state of HEATER LED connected to AVR328 MCU GPIO Pins
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
/**
 * @brief Macro definitions for Activity 1
 * 
 */
#define BUTTON_SW (PD2)
#define HEATER_SW (PD3)
#define HEATER_LED (PB0)

/**
 * @brief Varialbe for Heater LED Actuator Status 
 * 
 */
extern unsigned volatile HEATER_LED_STATUS;

/**
 * @brief Function Corresponding to Activity 1
 * 
 */
void act1(void);
void PeripheralInit();


#endif /** __ACT1_H_ */