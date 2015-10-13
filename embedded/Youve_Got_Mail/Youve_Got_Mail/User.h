/*
 * User.h
 *
 * Created: 16/09/2015 18:32:31
 *  Author: David
 */ 


#ifndef USER_H_
#define USER_H_

#include <avr/io.h>

// # Defines

#define F_CPU 1000000UL

// Function Prototypes
extern void Delay_Ms(uint16_t ms);
extern void Init(void);

extern uint8_t Check_Infrared(void);
extern void Toggle_PC0 (void);

//comm
void SPI_MasterInit(void);
void Set_SPI_modes(uint16_t isCPHA_1, uint16_t isCPOL_1, uint16_t isDORD_1);
#endif /* USER_H_ */
