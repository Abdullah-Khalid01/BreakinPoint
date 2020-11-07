/*
 * File:   main.c
 * Author: ABDULLAH 01
 *
 * Created on 06 ??????, 2020, 03:36 ?
 */


#include <xc.h>
#include "GPIO.h"
#pragma config WDTE = OFF
#define _XTAL_FREQ 16000000

void main(void) {
    //GPIO_SetPin_Dir(GPIO_PORTA ,GPIO_PIN0 , PIN_OUTPUT );
    
    GPIO_SetPort_Dir(GPIO_PORTB , PORT_OUTPUT);
    while(1){
        
        //GPIO_WritePIN(GPIO_PORTA , GPIO_PIN0 ,GPIO_PIN_HIGH);
        //GPIO_WritePIN(GPIO_PORTA , GPIO_PIN0 ,GPIO_PIN_LOW);
        GPIO_WritePort(GPIO_PORTB , GPIO_PORT_HIGH);
        GPIO_WritePort(GPIO_PORTB , GPIO_PORT_LOW);
    }
    
    
    return;
}
