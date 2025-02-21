/*
 * I2C.h
 *
 * Created: 1/6/2024 1:40:26 AM
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

void I2C_INIT(unsigned long SCL_Clock);
void I2C_START(void);
void I2C_WRITE(unsigned char cByte);
void I2C_STOP();




#endif /* I2C_H_ */