/*
 * I2C.h
 *
 * Created: 1/6/2024 1:56:03 AM
 *  Author: Shaimaa
 */ 


#ifndef I2C_H_
#define I2C_H_

/*==========================================================================================================================================================*/
/*------------------------------>Includes<-------------------------------------*/
#undef F_CPU
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Atmega32_Reg.h"
#include "DIO.h"
/*==========================================================================================================================================================*/

void I2C_Set_Address(unsigned char address);
unsigned char I2C_Read(unsigned char ack);



#endif /* I2C_H_ */