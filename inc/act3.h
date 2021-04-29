#ifndef __ACT3_H_
#define __ACT3_H_
/**
 * @file act3.h
 * @author Boopathi Vanavarayan
 * @brief Project to generate PWM output
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
/**
 * @brief Percentage Duty Cycle
 * 
 */
extern int pwm;

/**
 * @brief Related Functions of Activity 3 
 * 
 */
int act3(int );
void PWMInit(void);

#endif /** __ACT3_H_ */