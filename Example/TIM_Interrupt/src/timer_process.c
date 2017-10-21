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

GPIO_PinState state = GPIO_PIN_RESET;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim == &tim_handle) {
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, state);
		state = (state == GPIO_PIN_RESET) ? GPIO_PIN_SET : GPIO_PIN_RESET;
	}
}
