/*
 * fsm_manual.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status){
	case MAN_ZERO:
		dis7SEG(0);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_ONE;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_NINE;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ZERO;
		}
		break;
	case MAN_ONE:
		dis7SEG(1);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_TWO;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ZERO;
		}
		break;
	case MAN_TWO:
		dis7SEG(2);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_THREE;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_ONE;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ONE;
		}
		break;
	case MAN_THREE:
		dis7SEG(3);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_FOUR;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_TWO;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_TWO;
		}
		break;
	case MAN_FOUR:
		dis7SEG(4);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_FIVE;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_THREE;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_THREE;
		}
		break;
	case MAN_FIVE:
		dis7SEG(5);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_SIX;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_FOUR;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_FOUR;
		}
		break;
	case MAN_SIX:
		dis7SEG(6);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_SEVEN;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_FIVE;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_FIVE;
		}
		break;
	case MAN_SEVEN:
		dis7SEG(7);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_EIGHT;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_SIX;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_SIX;
		}
		break;
	case MAN_EIGHT:
		dis7SEG(8);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_NINE;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_SEVEN;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_SEVEN;
		}
		break;
	case MAN_NINE:
		dis7SEG(9);
//current state
		if (isRESETPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isINCPressed()){
			status = MAN_ZERO;
			setTimer2(1000);
		}
		if (isDECPressed()){
			status = MAN_EIGHT;
			setTimer2(1000);
		}
//change to auto
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_EIGHT;
		}
		break;
	default:
		break;
	}
}
