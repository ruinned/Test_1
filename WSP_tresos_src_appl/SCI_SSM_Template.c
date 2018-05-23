
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
  * on Tue May 22 10:59:42 CEST 2018. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

#include "Rte_SCI_SSM.h"

/*------------------------[runnable entity skeletons]------------------------*/

void WsSCC_10ms (void)
{
  WdgM_CheckpointIdType CheckpointId;
  boolean Permission;
  MODFreezeState MODFreezeFlag;
  P2CONST(NearFieldRssiExtremas, AUTOMATIC, AUTOMATIC) NearFieldRssiExtremaVals;
  ZMoverPos ZMoverPositionVal;
  uint8 StatusByte_2;
  uint8 StatusByte_1;
  BleStatus Value_1;
  GenericByte SCI_SSM_SftyMgrState_u8_TValue;
  GenericByte SCI_SSM_PwrTrfStateValue;
  GenericByte SCI_SSM_ReqStateWsValue;
  P2VAR(idt_FodCanState, AUTOMATIC, AUTOMATIC) FodCanState_0;
  idt_FodCanState FodCanState;
  P2VAR(Rpm_s16, AUTOMATIC, AUTOMATIC) ZMoverMotSpeedVal_0;
  Rpm_s16 ZMoverMotSpeedVal;
  P2VAR(uint8, AUTOMATIC, AUTOMATIC) StatusByte_0;
  uint8 StatusByte;
  P2VAR(zMoverIsInChrPosition, AUTOMATIC, AUTOMATIC) Value_0;
  zMoverIsInChrPosition Value;
  P2VAR(GenericByte, AUTOMATIC, AUTOMATIC) SCI_SSM_MODCmdValue_0;
  GenericByte SCI_SSM_MODCmdValue;
  P2VAR(EnableDisable, AUTOMATIC, AUTOMATIC) SCI_SSM_Enable_12V_FOD_b_TValue_0;
  EnableDisable SCI_SSM_Enable_12V_FOD_b_TValue;
  P2VAR(GenericByte, AUTOMATIC, AUTOMATIC) SCI_SSM_ActStateWsValue_0;
  GenericByte SCI_SSM_ActStateWsValue;
  Std_ReturnType status;

  Rte_IWrite_WsSCC_10ms_WspStMgr_stWsStMgr_SCI_SSM_ActStateWsValue(SCI_SSM_ActStateWsValue);

  SCI_SSM_ActStateWsValue_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_stWsStMgr_SCI_SSM_ActStateWsValue();

  Rte_IWrite_WsSCC_10ms_WspStMgr_cmdWUSupplyEn_SCI_SSM_Enable_12V_FOD_b_TValue(SCI_SSM_Enable_12V_FOD_b_TValue);

  SCI_SSM_Enable_12V_FOD_b_TValue_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_cmdWUSupplyEn_SCI_SSM_Enable_12V_FOD_b_TValue();

  Rte_IWrite_WsSCC_10ms_WspStMgr_stReqWU_SCI_SSM_MODCmdValue(SCI_SSM_MODCmdValue);

  SCI_SSM_MODCmdValue_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_stReqWU_SCI_SSM_MODCmdValue();

  Rte_IWrite_WsSCC_10ms_WspStMgr_stZMovrIsChargPos_Value(Value);

  Value_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_stZMovrIsChargPos_Value();

  Rte_IWrite_WsSCC_10ms_WspStMgr_stAcReqZM_StatusByte(StatusByte);

  StatusByte_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_stAcReqZM_StatusByte();

  Rte_IWrite_WsSCC_10ms_WspStMgr_vReqZM_ZMoverMotSpeedVal(ZMoverMotSpeedVal);

  ZMoverMotSpeedVal_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_vReqZM_ZMoverMotSpeedVal();

  Rte_IWrite_WsSCC_10ms_WspStMgr_stFodCan_FodCanState(FodCanState);

  FodCanState_0 = Rte_IWriteRef_WsSCC_10ms_WspStMgr_stFodCan_FodCanState();

  SCI_SSM_ReqStateWsValue = Rte_IRead_WsSCC_10ms_WspBleCdd_stWsStMgrReq_SCI_SSM_ReqStateWsValue();

  SCI_SSM_PwrTrfStateValue = Rte_IRead_WsSCC_10ms_WspPwrTrf_stPwrTrf_SCI_SSM_PwrTrfStateValue();

  SCI_SSM_SftyMgrState_u8_TValue = Rte_IRead_WsSCC_10ms_WspSafety_stSftyMgr_SCI_SSM_SftyMgrState_u8_TValue();

  Value_1 = Rte_IRead_WsSCC_10ms_WspBleCdd_stBle_Value();

  StatusByte_1 = Rte_IRead_WsSCC_10ms_WspZMovCdd_stParked_StatusByte();

  StatusByte_2 = Rte_IRead_WsSCC_10ms_WspZMovCdd_stZMOpCtrl_StatusByte();

  ZMoverPositionVal = Rte_IRead_WsSCC_10ms_WspZMovCdd_posZM_ZMoverPositionVal();

  NearFieldRssiExtremaVals = Rte_IRead_WsSCC_10ms_WspFodCan_recPosData_NearFieldRssiExtremaVals();

  MODFreezeFlag = Rte_IRead_WsSCC_10ms_WspDiagRtn_stModFreezeFlag_MODFreezeFlag();

  status = Rte_Call_FI_FID_InhChrg_GetFunctionPermission(&Permission);

  status = Rte_Call_alive_WdgMSvEnt_StMgr_CheckpointReached(CheckpointId);

  status = Rte_Call_alive_WdgMSvEnt_StMgr_UpdateAliveCounter();

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

