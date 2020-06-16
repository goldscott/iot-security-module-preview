/**************************************************************************/
/*                                                                        */
/*       Copyright (c) Microsoft Corporation. All rights reserved.        */
/*                                                                        */
/*       This software is licensed under the Microsoft Software License   */
/*       Terms for Microsoft Azure RTOS. Full text of the license can be  */
/*       found in the LICENSE file at https://aka.ms/AzureRTOS_EULA       */
/*       and in the root directory of this software.                      */
/*                                                                        */
/**************************************************************************/

#ifndef _MTI_RTOS_H_
#define _MTI_RTOS_H_

/**
 * @brief Create Message Type Indicator in format "X.Y-E-S",
 * where "Major.Minor-Encoding-Source". All fields are numeric
 */
#include "asc_security_core/model/mti.h"

#define MTI_MQTT MTI_NAME "=" MTI_CORE MTI_SOURCE_AZURERTOS

#endif /* _MTI_RTOS_H_ */