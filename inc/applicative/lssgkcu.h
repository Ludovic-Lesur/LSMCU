/*
 * lssgkcu.h
 *
 *  Created on: 1 oct. 2017
 *      Author: Ludovic
 */

#ifndef LSSGKCU_H
#define LSSGKCU_H

#include "tch.h"

/*** LSSGKCU structures ***/

typedef enum {
	LSMCU_OUT_ZBA_ON = 0,
	LSMCU_OUT_ZBA_OFF,
	LSMCU_OUT_RSEC_ON,
	LSMCU_OUT_RSEC_OFF,
	LSMCU_OUT_ZDV_ON,
	LSMCU_OUT_ZDV_OFF,
	LSMCU_OUT_ZPT_BACK_UP,
	LSMCU_OUT_ZPT_BACK_DOWN,
	LSMCU_OUT_ZPT_FRONT_UP,
	LSMCU_OUT_ZPT_FRONT_DOWN,
	LSMCU_OUT_ZDJ_OFF,
	LSMCU_OUT_ZEN_ON,
	LSMCU_OUT_COMP_AUTO_REG_MIN_ON,
	LSMCU_OUT_COMP_AUTO_REG_MAX_ON,
	LSMCU_OUT_COMP_DIRECT_ON,
	LSMCU_OUT_COMP_OFF,
	LSMCU_OUT_FPB_ON,
	LSMCU_OUT_FPB_OFF,
	LSMCU_OUT_FPB_APPLY,
	LSMCU_OUT_FPB_NEUTRAL,
	LSMCU_OUT_FPB_RELEASE,
	LSMCU_OUT_BPGD,
	LSMCU_OUT_ZVM_ON,
	LSMCU_OUT_ZVM_OFF,
	LSMCU_OUT_MPINV_FORWARD,
	LSMCU_OUT_MPINV_NEUTRAL,
	LSMCU_OUT_MPINV_BACKWARD,
	LSMCU_OUT_MP_0,
	LSMCU_OUT_MP_T_MORE,
	LSMCU_OUT_MP_T_LESS,
	LSMCU_OUT_MP_F_MORE,
	LSMCU_OUT_MP_F_LESS,
	LSMCU_OUT_MP_PR,
	LSMCU_OUT_MP_P,
	LSMCU_OUT_FD_APPLY,
	LSMCU_OUT_FD_NEUTRAL,
	LSMCU_OUT_FD_RELEASE,
	LSMCU_OUT_BPURG,
	LSMCU_OUT_S_HIGH_TONE,
	LSMCU_OUT_S_LOW_TONE,
	LSMCU_OUT_S_NEUTRAL,
	LSMCU_OUT_BPEV_ON,
	LSMCU_OUT_BPEV_OFF,
	LSMCU_OUT_BPSA_ON,
	LSMCU_OUT_BPSA_OFF,
	LSMCU_OUT_ZFG_ON,
	LSMCU_OUT_ZFG_OFF,
	LSMCU_OUT_ZFD_ON,
	LSMCU_OUT_ZFD_OFF,
	LSMCU_OUT_ZPR_ON,
	LSMCU_OUT_ZPR_OFF,
	LSMCU_OUT_ZLFRG_ON,
	LSMCU_OUT_ZLFRG_OFF,
	LSMCU_OUT_ZLFRD_ON,
	LSMCU_OUT_ZLFRD_OFF,
	LSMCU_OUT_ACSF_ON,
	LSMCU_OUT_ACSF_OFF,
	LSMCU_OUT_KVB_BPVAL_ON,
	LSMCU_OUT_KVB_BPVAL_OFF,
	LSMCU_OUT_KVB_BPMV_ON,
	LSMCU_OUT_KVB_BPMV_OFF,
	LSMCU_OUT_KVB_BPFC_ON,
	LSMCU_OUT_KVB_BPFC_OFF,
	LSMCU_OUT_KVB_BPTEST_ON,
	LSMCU_OUT_KVB_BPTEST_OFF,
	LSMCU_OUT_KVB_BPSF_ON,
	LSMCU_OUT_KVB_BPSF_OFF,
	LSMCU_OUT_NOP = 0xFF
} LSMCU_To_LSSGKCU;

typedef enum {
	// Bytes 0 to TCH_SPEED_MAX_KMH are reserved for coding speed in km/h.
	// KVB common.
	LSMCU_IN_KVB_ALL_OFF = TCH_SPEED_MAX_KMH + 1,
	// KVB lights.
	LSMCU_IN_KVB_LVAL_BLINK,
	LSMCU_IN_KVB_LVAL_ON,
	LSMCU_IN_KVB_LVAL_OFF,
	LSMCU_IN_KVB_LMV_ON,
	LSMCU_IN_KVB_LMV_OFF,
	LSMCU_IN_KVB_LFC_ON,
	LSMCU_IN_KVB_LFC_OFF,
	LSMCU_IN_KVB_LV_ON,
	LSMCU_IN_KVB_LV_OFF,
	LSMCU_IN_KVB_LFU_ON,
	LSMCU_IN_KVB_LFU_OFF,
	LSMCU_IN_KVB_LPS_ON,
	LSMCU_IN_KVB_LPS_OFF,
	LSMCU_IN_KVB_LSSF_BLINK,
	LSMCU_IN_KVB_LSSF_ON,
	LSMCU_IN_KVB_LSSF_OFF,
	// KVB 7-segments displays.
	LSMCU_IN_KVB_YG_OFF,
	LSMCU_IN_KVB_YG_PA400,
	LSMCU_IN_KVB_YG_UC512,
	LSMCU_IN_KVB_YG_888,
	LSMCU_IN_KVB_YG_DASH,
	LSMCU_IN_KVB_G_B,
	LSMCU_IN_KVB_Y_B,
	LSMCU_IN_KVB_G_P,
	LSMCU_IN_KVB_Y_P,
	LSMCU_IN_KVB_G_L,
	LSMCU_IN_KVB_Y_L,
	LSMCU_IN_KVB_G_00,
	LSMCU_IN_KVB_Y_00,
	LSMCU_IN_KVB_G_000,
	LSMCU_IN_KVB_Y_000,
} LSSGKCU_To_LSMCU;

/*** LSSGKCU functions ***/

void LSSGKCU_Init(void);
void LSSGKCU_FillRxBuffer(unsigned char at_cmd);
void LSSGKCU_Send(unsigned char at_cmd);
void LSSGKCU_Task(void);

#endif /* LSSGKCU_H */
