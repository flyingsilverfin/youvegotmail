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

	Init();
    while(1)
    {
		
        PINC = (1<<PINC0); // Toggle PC0
		Delay_Ms(1000);
		
    }
}