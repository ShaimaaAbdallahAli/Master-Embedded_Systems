/*
 * BIT_MATH.h
 *
 * Created: 10/29/2023
 *  Author: Shaimaa
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SetBit(Reg,BitNumber) (Reg |= (1<<BitNumber))
#define ClearBit(Reg,BitNumber) (Reg &=~ (1<<BitNumber))
#define ToggleBit(Reg,BitNumber) (Reg ^= (1<<BitNumber))
#define GetBit(Reg,BitNumber) ((Reg>>BitNumber)&1) 




#endif /* BIT_MATH_H_ */