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

#ifndef _MTI_H_
#define _MTI_H_

/**
 * @brief Create Message Type Indicator in format "X.Y-E-S",
 * where "Major.Minor-Encoding-Source". All fields are numeric
 */

#define MTI_NAME "mti"
#define SCHEMA_MAJOR_VER "1"
#define SCHEMA_MINOR_VER "0"

#define JSON_ENCODING   "0"
#define FLAT_BUFFER     "1"

#define SCHEMA_ENCODING JSON_ENCODING

#define MTI_CORE SCHEMA_MAJOR_VER "." SCHEMA_MINOR_VER "-" SCHEMA_ENCODING "-"

// Existing sources
#define MTI_SOURCE_AZURERTOS "0"

#endif /* _MTI_H_ */