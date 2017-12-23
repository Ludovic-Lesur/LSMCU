/*
 * at.c
 *
 *  Created on: 1 oct. 2017
 *      Author: Ludovic
 */

#include "at.h"
#include "atCommands.h"
#include "gpio.h"
#include "mapping.h"
#include "types.h"

/*** AT commands functions ***/

/* DECODE AND EXECUTE AN AT COMMAND.
 * @param atCommand: Received AT command (byte).
 * @return: None.
 */
void AT_DecodeExecute(unsigned char atCommand) {
	if (atCommand <= AT_SPEED_MAX) {
		// Transmit speed to Tachro and VACMA modules.
	}
	else {
		// Decode AT command.
		switch(atCommand) {
		case AT_KVB_LVAL_ON:
			GPIO_Write(LED2, HIGH);
			break;
		case AT_KVB_LVAL_OFF:
			GPIO_Write(LED2, LOW);
			break;
		default:
			break;
		}
	}
}
