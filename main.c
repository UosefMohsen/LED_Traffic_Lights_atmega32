/*
 * LED.c
 *
 * Created: 9/9/2023 11:19:35 AM
 * Author : Youssef
 */
#define F_CPU 16000000
#include <avr/io.h>
#include "STDMACROS.h"
#include <util/delay.h>

int main(void)
{
	set_bit(DDRC,2);
	set_bit(DDRC,7);
	set_bit(DDRD,3);
    while (1) 
    {
		set_bit(PORTC,2);
		_delay_ms(1000);
		clear_bit(PORTC,2);
		
		set_bit(PORTC,7);
		_delay_ms(1000);
		clear_bit(PORTC,7);
		
		set_bit(PORTD,3);
		_delay_ms(1000);
		clear_bit(PORTD,3);
		_delay_ms(1000);
		
    }
}

