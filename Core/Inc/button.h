/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isRESETPressed ();
int isINCPressed();
int isDECPressed();

void subKeyProcess(int i);

void getKeyInput();

#endif /* INC_BUTTON_H_ */
