/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch (status){
	case INIT:
		status =AUT_NINE;
		setTimer2(105);

		break;
	case AUT_ZERO:
		dis7SEG(0);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ZERO;
		}
//change to manual
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
		break;
	case AUT_ONE:
		dis7SEG(1);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ZERO;
		}
//change to manual
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
		break;
	case AUT_TWO:
		dis7SEG(2);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_ONE;
		}
//change to manual
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
		break;
	case AUT_THREE:
		dis7SEG(3);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_TWO;
		}
//change to manual
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
		break;
	case AUT_FOUR:
		dis7SEG(4);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_THREE;
		}
//change to manual
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
		break;
	case AUT_FIVE:
		dis7SEG(5);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_FOUR;
		}
//change to manual
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
		break;
	case AUT_SIX:
		dis7SEG(6);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_FIVE;
		}
//change to manual
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
		break;
	case AUT_SEVEN:
		dis7SEG(7);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_SIX;
		}
//change to manual
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
		break;
	case AUT_EIGHT:
		dis7SEG(8);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_SEVEN;
		}
//change to manual
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
		break;
	case AUT_NINE:
		dis7SEG(9);
//current state
		if (timer2_flag == 1){
			setTimer2(100);
			status =AUT_EIGHT;
		}
//change to manual
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
		break;
	default:
		break;
	}
}
