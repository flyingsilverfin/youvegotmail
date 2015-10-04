/*
 * Youve_Got_Mail.c
 *
 * Created: 16/09/2015 17:29:23
 *  Author: David
 */ 


#include <avr/io.h>
#include "User.h"

int main(void)
{
//	Return_5();
	Init();
	
	
	while(1)
    {
		while(1)
		{
			PINC = (1<<PINC0); // Toggle PC0
			Delay_Ms(1000);
		}
		Check_Infrared();
		uint8_t Detector_Blocked = Check_Infrared();
		
		if (Detector_Blocked == 1)
		{
			PORTC = (1<<PORTC0);
		}
		else
		{
			PORTC = 0;
		}
		
    }
}