


#ifndef _MAIN_H_
#define _MAIN_H_

#include "stm32f10x.h"

typedef struct {
	uint32_t 			RCC_APBxPeriph;
	GPIO_TypeDef 		*GPIOx;
	GPIO_InitTypeDef	GPIO_InitStruct;
} periph_gpio_t;


#endif
