#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Boopathi Vanavarayan ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define BUTTON_SW (PD2)
#define HEATER_SW (PD3)
#define HEATER_LED (PB0)


#endif /* __PROJECT_CONFIG_H__ */