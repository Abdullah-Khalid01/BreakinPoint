/* 
 * File:   GPIO.h
 * Author: ABDULLAH 01
 *
 * Created on 06 ??????, 2020, 03:54 ?
 */

#ifndef GPIO_H
#define	GPIO_H

#include "STD-typdef1.h"
#include "Bit_Math.h"

#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2
#define GPIO_PORTD 3
#define GPIO_PORTE 4

#define GPIO_PIN0  0
#define GPIO_PIN1  1
#define GPIO_PIN2  2
#define GPIO_PIN3  3
#define GPIO_PIN4  4
#define GPIO_PIN5  5
#define GPIO_PIN6  6
#define GPIO_PIN7  7

#define PIN_OUTPUT 0
#define PIN_INPUT  1

#define PORT_OUTPUT 0x00
#define PORT_INPUT  0xFF

#define GPIO_PIN_HIGH 1
#define GPIO_PIN_LOW  0

#define GPIO_PORT_HIGH 0xFF
#define GPIO_PORT_LOW  0x00

void GPIO_SetPort_Dir(uint8 PORT , uint8 dir);
void GPIO_SetPin_Dir (uint8 PORT , uint8 PIN , uint8 dir);

void GPIO_WritePort(uint8 PORT , uint8 val);
void GPIO_WritePIN(uint8 PORT , uint8 PIN ,uint8 val);
void delay();

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* GPIO_H */

