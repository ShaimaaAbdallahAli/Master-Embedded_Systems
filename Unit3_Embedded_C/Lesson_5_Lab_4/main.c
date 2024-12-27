typedef volatile unsigned int vuint32_t;
#include <stdint.h>
#include <stdlib.h>
//register address
#define RCC_BASE      0x40021000
#define GPIOA_BASE    0x40010800
#define RCC_APB2ENR   *(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH     *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR     *(volatile uint32_t *)(GPIOA_BASE + 0x0C)
//bit fields
#define RCC_IOPAEN   (1<<2)
#define GPIOA13      (1<<13)

typedef union {
	vuint32_t        all_fileds;
	struct{
		vuint32_t    reserved:13;
		vuint32_t    P_13:1;

	} Pin;
} R_ODR_t;

volatile R_ODR_t*  R_ODR =  (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);

void* _sbrk (int incr)
{
	static unsigned char* heap_ptr=NULL;
	unsigned char* prev_heap_ptr=NULL;
	extern unsigned int _E_bss ;//sumbol
	extern unsigned int _heap_End; //symbol

	//first time initialized
	if(heap_ptr == NULL)
		heap_ptr = (unsigned char*)&_E_bss;
	prev_heap_ptr = heap_ptr;

	//protect stack
	if((heap_ptr + incr) >  (&_heap_End))
		return (void*) NULL;

	//booking inc size
	heap_ptr +=incr;

	return (void*) prev_heap_ptr;
}


int main(void)
{
	RCC_APB2ENR  |= RCC_IOPAEN;
	GPIOA_CRH    &= 0xFF0FFFFF;
	GPIOA_CRH    |= 0x00200000;

	while(1)
	{
		R_ODR->Pin.P_13 = 1;
		for(int i =0; i<5000; i++); //arbitrary delay
		R_ODR->Pin.P_13 = 0;
		for(int i =0; i<5000; i++); //arbitrary delay

	}
	
	return 0;
}
