/*
 * DIO_CFG.h
 *
 * Created: 10/30/2023 4:29:01 PM
 *  Author: Shaimaa
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO.h"
typedef struct 
{
	DIO_DirTypes PinDir;
	STD_LevelTypes PinLevel;
}DIO_PinCfg;
#define PINCOUNT 32
void DIO_Init(void);



#endif /* DIO_CFG_H_ */