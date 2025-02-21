/*
 * lcd.h
 *
 * created: 12/3/2024 8:26:12 am
 *  author: Shaimaa
 */ 


#ifndef lcd_h_
#define lcd_h_
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LCD_DATA_DIR		DDRA
#define LCD_CONFIGE_DIR		DDRB
#define LCD_DATA_PORT		PORTA
#define LCD_CONFIGE_PORT	PORTB
#define LCD_RS_PIN			1
#define LCD_RW_PIN			2
#define LCD_E_PIN			3


#define LCD_MODE			EIGHT_BIT_MODE
#define FOUR_BIT_MODE		0
#define EIGHT_BIT_MODE		1


#define LCD_FUNCTION_8BIT_2LINES   					(0x38)
#define LCD_FUNCTION_4BIT_2LINES   					(0x28)
#define LCD_MOVE_DISP_RIGHT       					(0x1C)
#define LCD_MOVE_DISP_LEFT   						(0x18)
#define LCD_MOVE_CURSOR_RIGHT   					(0x14)
#define LCD_MOVE_CURSOR_LEFT 	  					(0x10)
#define LCD_DISP_OFF   								(0x08)
#define LCD_DISP_ON_CURSOR   						(0x0E)
#define LCD_DISP_ON_CURSOR_BLINK   					(0x0F)
#define LCD_DISP_ON_BLINK   						(0x0D)
#define LCD_DISP_ON   								(0x0C)
#define LCD_ENTRY_DEC   							(0x04)
#define LCD_ENTRY_DEC_SHIFT   						(0x05)
#define LCD_ENTRY_INC_   							(0x06)
#define LCD_ENTRY_INC_SHIFT   						(0x07)
#define LCD_BEGIN_AT_FIRST_ROW						(0x80)
#define LCD_BEGIN_AT_SECOND_ROW						(0xC0)
#define LCD_CLEAR_SCREEN							(0x01)
#define LCD_ENTRY_MODE								(0x06)


void LCD_INIT(void);
void LCD_WRITE_COMMAND(unsigned char command);
void LCD_WRITE_CHAR(unsigned char data);
void LCD_WRITE_STRING(const char* data);
void LCD_GO_TO_XY(unsigned char x,unsigned char y);
void LCD_WRITE_NUMBER(int number);
void LCD_clear_screen();
void LCD_WRITE_REAL_NUMBER(double real_number);



#endif /* lcd_h_ */