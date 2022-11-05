/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "global.h"
int status = 0;

void ledBlink(){
	if (timer1_flag ==1){
		setTimer1(100);
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	}
}
