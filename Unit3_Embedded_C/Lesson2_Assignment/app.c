#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:Shaimaa-Khattab";
unsigned char const string_buffer2[100]="learn-in-depth:Shaimaa-Khattab";


void main(void)
{
	Uart_send_string(string_buffer);
}