
#include "GPIO.h"
#include <xc.h>

void GPIO_SetPort_Dir(uint8 PORT , uint8 dir)
{
    switch (PORT)
    {
        case GPIO_PORTA:
            TRISA = dir;
            break;
            
        case GPIO_PORTB:
            TRISB=dir;
            break;
            
        case GPIO_PORTC:
            TRISC = dir;
            break;
        case GPIO_PORTD:
            TRISD = dir;
            break;    
        case GPIO_PORTE:
            TRISE = dir;
            break;     
        default:
            break;
    }
    
}

void GPIO_SetPin_Dir (uint8 PORT , uint8 PIN , uint8 dir)
{
    switch (dir)
    {
        case PIN_OUTPUT:
            switch (PORT)
            {
                case GPIO_PORTA:
                    Clr_bit(TRISA,PIN);
                    break;
                case GPIO_PORTB:
                    Clr_bit(TRISB,PIN);
                    break;
                case GPIO_PORTC:
                    Clr_bit(TRISC,PIN);
                    break;
                case GPIO_PORTD:
                    Clr_bit(TRISD,PIN);
                    break;
                case GPIO_PORTE:
                    Clr_bit(TRISE,PIN);
                    break;
                    
                default:
                    break;
            }
            break;
 
        case PIN_INPUT:
            switch (PORT)
            {
                case GPIO_PORTA:
                    Set_bit(TRISA,PIN);
                    break;
                case GPIO_PORTB:
                    Set_bit(TRISB,PIN);
                    break;
                case GPIO_PORTC:
                    Set_bit(TRISC,PIN);
                    break;
                case GPIO_PORTD:
                    Set_bit(TRISD,PIN);
                    break;
                case GPIO_PORTE:
                    Set_bit(TRISE,PIN);
                    break;
                default:
                    break;
            }
            break;
            default:
            break;
    }
}

void GPIO_WritePort(uint8 PORT , uint8 val)
{
    switch(PORT)
    {
        case GPIO_PORTA:
            PORTA =val;
            break;
        case GPIO_PORTB:
            PORTB =val;
            break;
        case GPIO_PORTC:
            PORTC =val;
            break;
        case GPIO_PORTD:
            PORTD =val;
            break;
        case GPIO_PORTE:
            PORTE =val;
            break;   
            
        default:
            break;
    }
}
void GPIO_WritePIN(uint8 PORT , uint8 PIN ,uint8 val)
{
    switch(val)
    {
        case GPIO_PIN_HIGH:
            switch(PORT)
            {
                case GPIO_PORTA:
                    Set_bit(PORTA,PIN);
                    break;
                case GPIO_PORTB:
                    Set_bit(PORTB,PIN);
                    break;
                case GPIO_PORTC:
                    Set_bit(PORTC,PIN);
                    break;
                case GPIO_PORTD:
                    Set_bit(PORTD,PIN);
                    break;
                case GPIO_PORTE:
                    Set_bit(PORTE,PIN);
                    break;    
            }
            break;
            case GPIO_PIN_LOW:
            switch(PORT)
            {
                case GPIO_PORTA:
                    Clr_bit(PORTA,PIN);
                    break;
                case GPIO_PORTB:
                    Clr_bit(PORTB,PIN);
                    break;
                case GPIO_PORTC:
                    Clr_bit(PORTC,PIN);
                    break;
                case GPIO_PORTD:
                    Clr_bit(PORTD,PIN);
                    break;
                case GPIO_PORTE:
                    Clr_bit(PORTE,PIN);
                    break;    
            }
            break;
        default:
            break;
            
    }
}

void delay()
{
    unsigned int a;
    for(a=0;a<10000;a++);
}

