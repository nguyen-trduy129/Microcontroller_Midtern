/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "seg7.h"

#define MAN_ZERO		100
#define MAN_ONE			101
#define MAN_TWO			102
#define MAN_THREE		103
#define MAN_FOUR		104
#define MAN_FIVE		105
#define MAN_SIX			106
#define MAN_SEVEN		107
#define MAN_EIGHT		108
#define MAN_NINE		109

#define INIT			1
#define AUT_ZERO		2
#define AUT_ONE			3
#define	AUT_TWO			4
#define	AUT_THREE		5
#define	AUT_FOUR		6
#define AUT_FIVE		7
#define AUT_SIX			8
#define AUT_SEVEN		9
#define AUT_EIGHT		10
#define AUT_NINE		11

extern int status;

void ledBlink ();

#endif /* INC_GLOBAL_H_ */
