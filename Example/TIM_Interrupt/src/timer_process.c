/*
 * timer_process.c
 *
 *  Created on: 2017年10月21日
 *      Author: kajiala
 */

#include <stdint.h>
#include <stdbool.h>
#include "stm32f4xx_hal.h"
#include "timer_process.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim == &tim_handle) {
		asm volatile("nop");
	}
}
