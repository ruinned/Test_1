/*----------------------------------------------------------------------------
** Project Name: ORU
** #Archive: OruBleCdd.h #
** #Author: Kenan Bilic#
** #Date: 2016-02-22#
** (c) Copyright 2016, Bombardier Transportation
**----------------------------------------------------------------------------
** #Revision: X.Z#
**----------------------------------------------------------------------------
** Target system: Freescale MPC5744P
** Compiler:GHS
** Description: 
**----------------------------------------------------------------------------
**               A U T H O R   I D E N T I T Y
**----------------------------------------------------------------------------
** Initials     Name                     Company
** --------     ---------------------    -------------------------------------
** KBILIC       Kenan Bilic              Bombardier Transportation
**----------------------------------------------------------------------------
**               R E V I S I O N   H I S T O R Y
**----------------------------------------------------------------------------
** #Log: #
** #Rev: Info:
**--------------------------------------------------------------------------*/
#ifndef CDD_03_BLE_ORUBLECDD_H
#define CDD_03_BLE_ORUBLECDD_H

/******************************************************************************/
/*                 Definition of exported symbolic constants                  */
/******************************************************************************/

/******************************************************************************/
/*                Definition of exported function like macros                 */
/******************************************************************************/

/******************************************************************************/
/*          Definition of exported types (typdefs, enums, struct, union)      */
/******************************************************************************/
typedef enum {
    BLE_SLEEP_OK = 0x00,
    BLE_SLEEP_NOT_OK
}BLE_Sleep_Status_E;

typedef enum {
    BLE_WAKE_OK = 0x00,
    BLE_WAKE_NOT_OK
}BLE_Wake_Status_E;
/******************************************************************************/
/*                    Declaration of exported variables                       */
/******************************************************************************/

/******************************************************************************/
/*                  Declaration of exported constant data                     */
/******************************************************************************/

/******************************************************************************/
/*               Declaration of exported function prototypes                  */
/******************************************************************************/

BLE_Sleep_Status_E BLE_SetSleepMode(void);
BLE_Wake_Status_E BLE_SetWakeUp(void);
void BLE_ReInit_AfterSleep(void);
void OruBleCdd_Init(void);

#endif /* 20_CDD_03_BLE_ORUBLECDD_H_ */
