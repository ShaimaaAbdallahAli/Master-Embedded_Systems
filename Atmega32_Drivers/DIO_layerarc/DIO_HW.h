/*
 * DIO_HW.h
 *
 * Created: 10/30/2023 1:49:25 PM
 *  Author: Shaimaa
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_
#include "STD_TYPES.h"

#define PORTA_Reg (*((volatile Uint8 *)0x3B))
#define DDRA_Reg (*((volatile Uint8 *)0x3A))
#define PINA_Reg (*((volatile Uint8 *)0x39))

#define PORTB_Reg (*((volatile Uint8 *)0x38))
#define DDRB_Reg (*((volatile Uint8 *)0x37))
#define PINB_Reg (*((volatile Uint8 *)0x36))


#define PORTC_Reg (*((volatile Uint8 *)0x35))
#define DDRC_Reg (*((volatile Uint8 *)0x34))
#define PINC_Reg (*((volatile Uint8 *)0x33))

#define PORTD_Reg (*((volatile Uint8 *)0x32))
#define DDRD_Reg (*((volatile Uint8 *)0x31))
#define PIND_Reg (*((volatile Uint8 *)0x30))




#endif /* DIO_HW_H_ */