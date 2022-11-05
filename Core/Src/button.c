/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "button.h"

int RESET_flag =0;
int INC_flag =0;
int DEC_flag =0;
int longPressed_flag[3] ={0, 0 ,0};

int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int TimerForKeyPress[3] = {300, 300, 300};

int isRESETPressed (){
	if (RESET_flag ==1){
		RESET_flag =0;
		return 1;
	}
	return 0;
}

int isINCPressed (){
	if (INC_flag ==1){
		INC_flag =0;
		return 1;
	}
	return 0;
}

int isDECPressed (){
	if (DEC_flag ==1){
		DEC_flag =0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int i){
	//TODO
	if (i==0) {
		RESET_flag =1;
	}
	else if (i==1) {
		INC_flag =1;
	}
	else if (i==2) {
		DEC_flag =1;
	}
}

void getKeyInput (){
	for (int i=0; i<3; i++){
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = HAL_GPIO_ReadPin(GPIOA, (uint16_t)(0x01)<<(8+i));
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])) {
			if (KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];
				if (KeyReg2[i] == PRESSED_STATE){
					//TODO
					subKeyProcess(i);//tách ra để làm cho dễ nhìn

					if (longPressed_flag[i] == 0){
						TimerForKeyPress[i] =300;
						longPressed_flag[i] =1;
					}
					else {
						TimerForKeyPress[i] =100;
					}
				}
			}else {
				if (KeyReg2[i] == NORMAL_STATE){
					longPressed_flag[i] = 0;
				}

				TimerForKeyPress[i]--;
				if (TimerForKeyPress[i] ==0){
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}
}
