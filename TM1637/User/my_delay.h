#ifndef MY_DELAY_H_
#define MY_DELAY_H_

#include "ch32v30x.h"

void My_Delay_Init(void);
void My_Delay_Us(uint32_t n);
void My_Delay_Ms(uint32_t n);

#endif /* MY_DELAY_H_ */
