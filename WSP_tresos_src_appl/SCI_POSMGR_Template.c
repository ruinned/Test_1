
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
  * on Wed Apr 18 10:40:00 CEST 2018. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

#include "Rte_SCI_POSMGR.h"

/*------------------------[runnable entity skeletons]------------------------*/

void WsPosMgr_20ms (void)
{
  Dem_EventStatusType EventStatus_4;
  Dem_EventStatusType EventStatus_3;
  Dem_EventStatusType EventStatus_2;
  Dem_EventStatusType EventStatus_1;
  Dem_EventStatusType EventStatus_0;
  Dem_EventStatusType EventStatus;
  P2CONST(ResData, AUTOMATIC, AUTOMATIC) ResDataVal;
  GenericByte SCI_SSM_ActStateWsValue;
  GenericByte DiagCtrlFreeze;
  boolean DiagCtrlPos;
  float32 SteeringWheelAngle;
  float32 Speed;
  float32 DrivingDistance;
  P2CONST(uint32, AUTOMATIC, AUTOMATIC) FarFieldRssiValues;
  P2CONST(FarFieldAntennaData, AUTOMATIC, AUTOMATIC) FarFieldAntennaValues;
  P2CONST(uint16, AUTOMATIC, AUTOMATIC) NearFieldRssiVals;
  P2CONST(NearFieldRssiExtremas, AUTOMATIC, AUTOMATIC) NearFieldRssiExtremaVals;
  uint32 Timestamp_2;
  Distance_s32 Y_1;
  Distance_s32 X_1;
  uint32 Timestamp_1;
  AngleDegree_s16 Theta_1;
  P2VAR(Distance_s32, AUTOMATIC, AUTOMATIC) Y_Near_0;
  Distance_s32 Y_Near;
  P2VAR(Distance_s32, AUTOMATIC, AUTOMATIC) X_Near_0;
  Distance_s32 X_Near;
  P2VAR(AngleDegree_s16, AUTOMATIC, AUTOMATIC) ThetaNear_0;
  AngleDegree_s16 ThetaNear;
  P2VAR(boolean, AUTOMATIC, AUTOMATIC) BoolVal_0;
  boolean BoolVal;
  P2VAR(Distance_s32, AUTOMATIC, AUTOMATIC) Y_0;
  Distance_s32 Y;
  P2VAR(Distance_s32, AUTOMATIC, AUTOMATIC) X_0;
  Distance_s32 X;
  P2VAR(uint32, AUTOMATIC, AUTOMATIC) Timestamp_0;
  uint32 Timestamp;
  P2VAR(AngleDegree_s16, AUTOMATIC, AUTOMATIC) Theta_0;
  AngleDegree_s16 Theta;
  Std_ReturnType status;

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_Theta(Theta);

  Theta_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_Theta();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_Timestamp(Timestamp);

  Timestamp_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_Timestamp();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_X(X);

  X_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_X();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_Y(Y);

  Y_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_Y();

  Rte_IWrite_WsPosMgr_20ms_WspBleCdd_bTrjSwitch_BoolVal(BoolVal);

  BoolVal_0 = Rte_IWriteRef_WsPosMgr_20ms_WspBleCdd_bTrjSwitch_BoolVal();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_ThetaNear(ThetaNear);

  ThetaNear_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_ThetaNear();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_X_Near(X_Near);

  X_Near_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_X_Near();

  Rte_IWrite_WsPosMgr_20ms_WspPosMgr_posActual_Y_Near(Y_Near);

  Y_Near_0 = Rte_IWriteRef_WsPosMgr_20ms_WspPosMgr_posActual_Y_Near();

  Theta_1 = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_Theta();

  Timestamp_1 = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_Timestamp();

  X_1 = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_X();

  Y_1 = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_Y();

  Timestamp_2 = Rte_IRead_WsPosMgr_20ms_WspFodCan_recData_Timestamp();

  NearFieldRssiExtremaVals = Rte_IRead_WsPosMgr_20ms_WspFodCan_recData_NearFieldRssiExtremaVals();

  NearFieldRssiVals = Rte_IRead_WsPosMgr_20ms_WspFodCan_recData_NearFieldRssiVals();

  FarFieldAntennaValues = Rte_IRead_WsPosMgr_20ms_WspFodCan_recData_FarFieldAntennaValues();

  FarFieldRssiValues = Rte_IRead_WsPosMgr_20ms_WspFodCan_recData_FarFieldRssiValues();

  DrivingDistance = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_DrivingDistance();

  Speed = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_Speed();

  SteeringWheelAngle = Rte_IRead_WsPosMgr_20ms_WspBleCdd_recPosOfflTrj_SteeringWheelAngle();

  DiagCtrlPos = Rte_IRead_WsPosMgr_20ms_WspDiagCtrl_cmdPosActivate_DiagCtrlPos();

  DiagCtrlFreeze = Rte_IRead_WsPosMgr_20ms_WspDiagCtrl_cmdPosFreeze_DiagCtrlFreeze();

  SCI_SSM_ActStateWsValue = Rte_IRead_WsPosMgr_20ms_WspStMgr_stWsStMgr_SCI_SSM_ActStateWsValue();

  ResDataVal = Rte_IRead_WsPosMgr_20ms_WspFodCan_recResData_ResDataVal();

  status = Rte_Call_Event_POS_FAR_MEASURE_SetEventStatus(EventStatus);

  status = Rte_Call_Event_POS_MEASUREMENT_ERROR_ANTENNA_2_SetEventStatus(EventStatus_0);

  status = Rte_Call_Event_POS_MEASUREMENT_ERROR_ANTENNA_3_SetEventStatus(EventStatus_1);

  status = Rte_Call_Event_POS_MEASUREMENT_ERROR_ANTENNA_4_SetEventStatus(EventStatus_2);

  status = Rte_Call_Event_POS_NEAR_MEASURE_SetEventStatus(EventStatus_3);

  status = Rte_Call_Event_POS_VEHICLE_DETECTION_DEFECT_SetEventStatus(EventStatus_4);

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

