/*
 * seg7.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "seg7.h"

void dis7SEG(int state){
	switch (state){
	case 0:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x3f), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x3f), 1);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x06), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x06), 1);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x5b), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x5b), 1);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x4f), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x4f), 1);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x66), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x66), 1);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x6d), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x6d), 1);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x7d), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x7d), 1);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x07), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x07), 1);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x7f), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x7f), 1);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0x6f), 0);
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(~0x6f), 1);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, (uint16_t)(0xff), 1);
		break;
	}
}
