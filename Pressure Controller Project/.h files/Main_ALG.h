/*
 * Main_ALG.h
 *
 *      Author: Shaimaa Khattab
 */

#ifndef MAIN_ALG_H_
#define MAIN_ALG_H_

#include "state.h"
#include "Platform_Types.h"
#include "stdint.h"
#include "stdio.h"


//Define all the states
extern void (*PD_Main_ALG_state)();

enum {
	PD_highpressure_detected,
}Main_ALG_status;

//Declare the state functions
STATE_define(PD_highpressure_detected);


#endif /* MAIN_ALG_H_ */
