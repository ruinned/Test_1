
/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains an Rte component template / example code
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.75
  * on Mon Apr 16 09:13:09 CEST 2018. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

#include "Rte_PwrTrf.h"

/*------------------------[runnable entity skeletons]------------------------*/

void PwrTrf_WspPwrTrf_Main (void)
{
  Dem_EventStatusType EventStatus_2;
  Dem_EventStatusType EventStatus_1;
  Dem_EventStatusType EventStatus_0;
  Dem_EventStatusType EventStatus;
  GenericByte SCI_SSM_ActStateWsValue;
  Voltage_s32 Voltage_3;
  Power_u16 PowerValue_4;
  Current_s32 Current_1;
  TempC TempCValue_4;
  TempC TempCValue_3;
  TempC TempCValue_2;
  TempC TempCValue_1;
  TempC TempCValue_0;
  PfcPwrGood PfcPwrGood;
  PfcAcOk PfcAcOk;
  Percentage_u16 SCI_PwrTrf_DutyCycle_u16_TValue_1;
  uint8 StatusByte_1;
  TempC TempCValue;
  Voltage_s32 Voltage_2;
  Current_s32 Current_0;
  Current_s32 Current;
  Voltage_u16 Voltage_1;
  Power_u16 PowerValue_3;
  uint16 Count_1;
  uint16 Count_0;
  uint16 Count;
  GenericByte SCI_PwrTrf_B6B_State_u8_TValue;
  PhaseShift PhaseShiftValue;
  P2VAR(Rpm_s16, AUTOMATIC, AUTOMATIC) ZMoverMotSpeedVal_0;
  Rpm_s16 ZMoverMotSpeedVal;
  P2VAR(Voltage_s32, AUTOMATIC, AUTOMATIC) Voltage_0;
  Voltage_s32 Voltage;
  P2VAR(GenericByte, AUTOMATIC, AUTOMATIC) SCI_PwrTrf_PwrTrfStateValue_0;
  GenericByte SCI_PwrTrf_PwrTrfStateValue;
  P2VAR(uint8, AUTOMATIC, AUTOMATIC) StatusByte_0;
  uint8 StatusByte;
  P2VAR(Power_u16, AUTOMATIC, AUTOMATIC) PowerValue_2;
  Power_u16 PowerValue_1;
  P2VAR(Power_u16, AUTOMATIC, AUTOMATIC) PowerValue_0;
  Power_u16 PowerValue;
  P2VAR(Percentage_u16, AUTOMATIC, AUTOMATIC) SCI_PwrTrf_DutyCycle_u16_TValue_0;
  Percentage_u16 SCI_PwrTrf_DutyCycle_u16_TValue;
  P2VAR(Freq_u32, AUTOMATIC, AUTOMATIC) Val_0;
  Freq_u32 Val;
  Std_ReturnType status;

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_frqB6Req_Val(Val);

  Val_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_frqB6Req_Val();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_pwmFanCtrl_SCI_PwrTrf_DutyCycle_u16_TValue(SCI_PwrTrf_DutyCycle_u16_TValue);

  SCI_PwrTrf_DutyCycle_u16_TValue_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_pwmFanCtrl_SCI_PwrTrf_DutyCycle_u16_TValue();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_pwrB6Req_PowerValue(PowerValue);

  PowerValue_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_pwrB6Req_PowerValue();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_pwrMaxEstm_PowerValue(PowerValue_1);

  PowerValue_2 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_pwrMaxEstm_PowerValue();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_stAcReqPwrTrf_StatusByte(StatusByte);

  StatusByte_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_stAcReqPwrTrf_StatusByte();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_stPwrTrf_SCI_PwrTrf_PwrTrfStateValue(SCI_PwrTrf_PwrTrfStateValue);

  SCI_PwrTrf_PwrTrfStateValue_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_stPwrTrf_SCI_PwrTrf_PwrTrfStateValue();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_uPfcReq_Voltage(Voltage);

  Voltage_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_uPfcReq_Voltage();

  Rte_IWrite_WspPwrTrf_Main_WspPwrTrf_vReqPwrTrf_ZMoverMotSpeedVal(ZMoverMotSpeedVal);

  ZMoverMotSpeedVal_0 = Rte_IWriteRef_WspPwrTrf_Main_WspPwrTrf_vReqPwrTrf_ZMoverMotSpeedVal();

  PhaseShiftValue = Rte_IRead_WspPwrTrf_Main_WspB6Cdd_phiB6Meas_PhaseShiftValue();

  SCI_PwrTrf_B6B_State_u8_TValue = Rte_IRead_WspPwrTrf_Main_WspB6Cdd_stB6_SCI_PwrTrf_B6B_State_u8_TValue();

  Count = Rte_IRead_WspPwrTrf_Main_WspB6cdd_numZeroCrossU_Count();

  Count_0 = Rte_IRead_WspPwrTrf_Main_WspB6cdd_numZeroCrossV_Count();

  Count_1 = Rte_IRead_WspPwrTrf_Main_WspB6cdd_numZeroCrossW_Count();

  PowerValue_3 = Rte_IRead_WspPwrTrf_Main_WspB6cdd_pwrB6Meas_PowerValue();

  Voltage_1 = Rte_IRead_WspPwrTrf_Main_WspB6cdd_uAvrg_Voltage();

  Current = Rte_IRead_WspPwrTrf_Main_WspBleCdd_iDcMeasOru_Current();

  Current_0 = Rte_IRead_WspPwrTrf_Main_WspBleCdd_iDcSetOru_Current();

  Voltage_2 = Rte_IRead_WspPwrTrf_Main_WspBleCdd_uDcMeasOru_Voltage();

  TempCValue = Rte_IRead_WspPwrTrf_Main_WspFodCan_tAmb_TempCValue();

  StatusByte_1 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_numCodRes_StatusByte();

  SCI_PwrTrf_DutyCycle_u16_TValue_1 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_pwmFanSpeed_SCI_PwrTrf_DutyCycle_u16_TValue();

  PfcAcOk = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_stPfcAcOk_PfcAcOk();

  PfcPwrGood = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_stPwrGood_PfcPwrGood();

  TempCValue_0 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_tPpmAmb_TempCValue();

  TempCValue_1 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_tPpmSink_TempCValue();

  TempCValue_2 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_tWpmAmb_TempCValue();

  TempCValue_3 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_tWpmFan_TempCValue();

  TempCValue_4 = Rte_IRead_WspPwrTrf_Main_WspIoHwAbs_tWpmSink_TempCValue();

  Current_1 = Rte_IRead_WspPwrTrf_Main_WspPfcCdd_iGrid_Current();

  PowerValue_4 = Rte_IRead_WspPwrTrf_Main_WspPfcCdd_pwrGrid_PowerValue();

  Voltage_3 = Rte_IRead_WspPwrTrf_Main_WspPfcCdd_uGrid_Voltage();

  SCI_SSM_ActStateWsValue = Rte_IRead_WspPwrTrf_Main_WspStMgr_stWsStMgr_SCI_SSM_ActStateWsValue();

  status = Rte_Call_Event_FAN_1_DEFECT_SetEventStatus(EventStatus);

  status = Rte_Call_Event_MAGN_COUPL_NOT_PLAUSIBLE_SetEventStatus(EventStatus_0);

  status = Rte_Call_Event_MAGN_COUPL_TOO_HIGH_SetEventStatus(EventStatus_1);

  status = Rte_Call_Event_MAGN_COUPL_TOO_LOW_SetEventStatus(EventStatus_2);

}

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[port handle API]----------------------------------

  ------------------------[per instance memory API]--------------------------

*/
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

