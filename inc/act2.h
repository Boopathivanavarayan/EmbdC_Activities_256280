#ifndef __ACT2_H_
#define __ACT2_H_
/**
 * @file act2.h
 * @author Boopathi Vanavarayan
 * @brief Project to get analog input from temperature set slider ie.potentiometer connected AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
/**
 * @brief Macro definitions for Activity 2
 * 
 */
#define SLIDER_CH 0

/**
 * @brief Variable to Hold Temperature Slider Input   
 * 
 */
extern unsigned volatile int temp;

/**
 * @brief Related Functions of Activity 2 
 * 
 */
unsigned volatile int act2(void);
void InitADC(void );
int ReadADC(unsigned volatile int );
#endif /** __ACT2_H_ */