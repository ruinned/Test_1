
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
  * on Thu Mar 15 15:42:05 CET 2018. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

#include "Rte_EXTFLSCDD.h"

/*------------------------[runnable entity skeletons]------------------------*/

void EXTFLSCDD_reSpiCom (void)
{
  Std_ReturnType status;

}

void EXTFLSCDD_reExtFlsCtrl (void)
{
  uint8 statusU8;
  Std_ReturnType status;

  status = Rte_Call_rpExtFlsNotify_NotificationCallback(statusU8);

}

Std_ReturnType EXTFLSCDD_reFlsRead (uint32 addresU32, uint32 sizeU32, uint32 destBuffAddrU32)
{
  Std_ReturnType status;

  return status;
}

Std_ReturnType EXTFLSCDD_reFlsWrite (uint32 addrU32, uint32 sizeU32, uint32 srcBuffAddrU32)
{
  Std_ReturnType status;

  return status;
}

Std_ReturnType EXTFLSCDD_reFlsErase (uint32 addrU32, uint32 sizeU32)
{
  Std_ReturnType status;

  return status;
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
