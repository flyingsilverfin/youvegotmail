/*
 * User.c
 *
 * Created: 18/09/2015 12:36:15
 *  Author: David
 */ 


#include <avr/io.h>
#include <delay.h>
#include "User.h"

void Delay_Ms(uint16_t ms)
{
	uint32_t Delay_Cycles;
	
	
	for (Delay_Cycles = (ms * (1000000/10000)) ; Delay_Cycles > 0 ; Delay_Cycles--);
}

void Init(void)
{
	// Define Output Pins
	DDRC = DDRC |(1<<DDC0); // PC0 is digital output
	
	//// Setup ADC on PC1
	//PRR = PRR |(1<<PRADC); //Enable ADC in power reduction register
	//ADMUX = ADMUX |(1<<REFS0)|(1<<MUX0)|(1<<ADLAR); // Ref = AVCC, Source = PC1, LSBs in separate register
	//ADCSRA = ADCSRA |(1<<ADEN); // ADC Enable
	//DIDR0 = DIDR0 |(1<<ADC1D); // Disable digital input on PC1
	
	//// Setup Comparator
	//PRR = PRR |(1<<PRADC); //Enable ADC in power reduction register
	
	//Return_5();
	
	while(1)
	{
		PINC = (1<<PINC0); // Toggle PC0
		//_delay_ms(1000);
		Delay_Ms(1000);
	}
}



uint8_t Check_Infrared(void)
{
	while(1)
	{
		PINC = (1<<PINC0); // Toggle PC0
		Delay_Ms(1000);
	}
	
	//ADCSRA = ADCSRA |(1<<ADSC); // Activate ADC
	//while(ADSC == 1); // Wait until ADC is setup
	//
	//uint8_t Threshold = 132;
	//if (ADCH > Threshold )
	//{
		//return 0;
	//}
	//
	//else 
	//{
		//return 1;
	//}

}

void Toggle_PC0 (void)
{
	
}

void SPI_MasterInit(void) {
	//this is the default value anyway but might as well re-set it
	//turns on the clock to the SPI module (else not powered on at all)
	PRR |= 1 << PRSPI;	
	
	/* Set MOSI and SCK output, all others input */
	//I assume these are going to be through PORTB
	DDRB |= (1<<PB3)|(1<<PB6);
	/* Enable SPI, Master, set clock rate fck/16 */
	SPCR |= (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

void Setup_SPI_For_NRFTransceiver(void) {
	/*
	the NRF Transceiver operates in
		CPHA = 0
		CPOL = 0
		DORD = 0 (MSb first)
	
	These are the default values for these bits anyway, good practice to set them anyway
	*/

	SPCR |= 0 << DORD;
	SPCR |= 0 << CPOL;
	SPCR |= 0 << CPHA;
}
