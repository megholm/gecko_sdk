/***************************************************************************//**
 * @file
 * @brief File System Shell Commands
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  FS_SHELL_PRIV_H_
#define  FS_SHELL_PRIV_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <rtos_description.h>
#include  <common/include/rtos_err.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                           FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

#if  (defined(RTOS_MODULE_COMMON_SHELL_AVAIL))
void FSShell_Init(RTOS_ERR *p_err);
#endif

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif