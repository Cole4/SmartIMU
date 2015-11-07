/* #include "stm32f4_delay.h" */

#ifndef __STM32F4_DELAY_H
#define __STM32F4_DELAY_H

#include "stm32f4xx_hal.h"
/*====================================================================================================*/
/*====================================================================================================*/
void Delay_1us( uint32_t nCnt_1us );
void Delay_10us( uint32_t nCnt_10us );
void Delay_100us( uint32_t nCnt_100us );
void Delay_1ms( uint32_t nCnt_1ms );
void Delay_10ms( uint32_t nCnt_10ms );
void Delay_100ms( uint32_t nCnt_100ms );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 
