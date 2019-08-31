/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */  

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include <stdio.h>
#include "led.h"

/** @addtogroup STM32F10x_StdPeriph_Template
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{

	SystemInit();
	
	
	led_init();
	
	/* Infinite loop */
	while (1)
	{
//		led_on();
//		led_off();
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
		/* Set PD0 and PD2 */
		GPIOC->BSRR = 0x00000001;
		/* Reset PD0 and PD2 */
		GPIOC->BRR  = 0x00000001;
	}
}

/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART */

  return ch;
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
