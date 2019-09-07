

#include "led.h"
#include "main.h"

periph_gpio_t led_gpio = {RCC_APB2Periph_GPIOC, GPIOC, {GPIO_Pin_0, GPIO_Speed_50MHz, GPIO_Mode_Out_PP}};

periph_gpio_t led_mco = {RCC_APB2Periph_GPIOA, GPIOA, {GPIO_Pin_8, GPIO_Speed_50MHz, GPIO_Mode_AF_PP}};


void led_init(void) {

	RCC_APB2PeriphClockCmd(led_gpio.RCC_APB2Periph, ENABLE);
	
	GPIO_Init(led_gpio.GPIOx, &led_gpio.GPIO_InitStruct);
	
	RCC_APB2PeriphClockCmd(led_mco.RCC_APB2Periph, ENABLE);
	
	GPIO_Init(led_mco.GPIOx, &led_mco.GPIO_InitStruct);
	
	RCC_MCOConfig(RCC_MCO_HSE);
	
}

void led_on(void) {
	GPIO_SetBits(led_gpio.GPIOx, led_gpio.GPIO_InitStruct.GPIO_Pin);
}

void led_off(void) {
	GPIO_ResetBits(led_gpio.GPIOx, led_gpio.GPIO_InitStruct.GPIO_Pin);
}



