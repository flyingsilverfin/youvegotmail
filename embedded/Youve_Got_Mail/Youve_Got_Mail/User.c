/*
 * User.c
 *
 * Created: 18/09/2015 12:36:15
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
	uint32_t Delay_Cycles;
	
	
	for (Delay_Cycles = (ms * (F_CPU/10000)) ; Delay_Cycles > 0 ; Delay_Cycles--);
}

void Set_Pin(uint8_t Port, uint8_t Pin)
{
	
}