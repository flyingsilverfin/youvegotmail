/*
 * User.c
 *
 * Created: 16/09/2015 18:30:18
 *  Author: David
 */ 

#include "User.h"
#include <avr/io.h>

void Init(void)
{
	// Define Output Pins
	DDRC = DDRC|(1<<DDC0); // PC0 is output
	
}

void Delay_Ms(uint16_t ms)
{
	uint16_t Delay_Cycles = (ms * (F_CPU/1000));
	
	
	for (Delay_Cycles = Delay_Cycles; Delay_Cycles == 0 ; Delay_Cycles--);
}

void Set_Pin(uint8_t Port, uint8_t Pin)
{
	
}