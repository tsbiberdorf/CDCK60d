/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : BitIoLdd4.h
**     Project     : ProcessorExpert
**     Processor   : MK60DN512VLQ10
**     Component   : BitIO_LDD
**     Version     : Component 01.033, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-01-08, 10:27, # CodeGen: 2
**     Abstract    :
**         The HAL BitIO component provides a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL BitIO API are simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : BitIoLdd4
**          Pin for I/O                                    : PTA10/FTM2_CH0/MII0_RXD2/FB_AD15/FTM2_QD_PHA/TRACE_D0
**          Pin signal                                     : 
**          Direction                                      : Output
**          Initialization                                 : 
**            Init. direction                              : Output
**            Init. value                                  : 0
**            Auto initialization                          : yes
**          Safe mode                                      : yes
**     Contents    :
**         Init   - LDD_TDeviceData* BitIoLdd4_Init(LDD_TUserData *UserDataPtr);
**         GetVal - bool BitIoLdd4_GetVal(LDD_TDeviceData *DeviceDataPtr);
**         ClrVal - void BitIoLdd4_ClrVal(LDD_TDeviceData *DeviceDataPtr);
**         SetVal - void BitIoLdd4_SetVal(LDD_TDeviceData *DeviceDataPtr);
**         NegVal - void BitIoLdd4_NegVal(LDD_TDeviceData *DeviceDataPtr);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file BitIoLdd4.h
** @version 01.00
** @brief
**         The HAL BitIO component provides a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL BitIO API are simpler and more
**         portable to various microprocessors.
*/         
/*!
**  @addtogroup BitIoLdd4_module BitIoLdd4 module documentation
**  @{
*/         

#ifndef __BitIoLdd4_H
#define __BitIoLdd4_H

/* MODULE BitIoLdd4. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "IO_Map.h"
#include "GPIO_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 



/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define BitIoLdd4_PRPH_BASE_ADDRESS  0x400FF000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define BitIoLdd4_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_BitIoLdd4_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define BitIoLdd4_Init_METHOD_ENABLED  /*!< Init method of the component BitIoLdd4 is enabled (generated) */
#define BitIoLdd4_GetVal_METHOD_ENABLED /*!< GetVal method of the component BitIoLdd4 is enabled (generated) */
#define BitIoLdd4_ClrVal_METHOD_ENABLED /*!< ClrVal method of the component BitIoLdd4 is enabled (generated) */
#define BitIoLdd4_SetVal_METHOD_ENABLED /*!< SetVal method of the component BitIoLdd4 is enabled (generated) */
#define BitIoLdd4_NegVal_METHOD_ENABLED /*!< NegVal method of the component BitIoLdd4 is enabled (generated) */

/* Definition of implementation constants */
#define BitIoLdd4_MODULE_BASE_ADDRESS PTA_BASE_PTR /*!< Name of macro used as the base address */
#define BitIoLdd4_PORTCONTROL_BASE_ADDRESS PORTA_BASE_PTR /*!< Name of macro used as the base address */
#define BitIoLdd4_PORT_MASK 0x0400U    /*!< Mask of the allocated pin from the port */



/*
** ===================================================================
**     Method      :  BitIoLdd4_Init (component BitIO_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the "Enable
**         in init. code" is set to "yes" value then the device is also
**         enabled(see the description of the Enable() method). In this
**         case the Enable() method is not necessary and needn't to be
**         generated. 
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* BitIoLdd4_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  BitIoLdd4_GetVal (component BitIO_LDD)
*/
/*!
**     @brief
**         Returns the input/output value. If the direction is [input]
**         then the input value of the pin is read and returned. If the
**         direction is [output] then the last written value is read
**         and returned (see <Safe mode> property for limitations).
**         This method cannot be disabled if direction is [input].
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by <Init> method.
**     @return
**                         - Input or output value. Possible values:
**                           <false> - logical "0" (Low level)
**                           <true> - logical "1" (High level)
*/
/* ===================================================================*/
bool BitIoLdd4_GetVal(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  BitIoLdd4_ClrVal (component BitIO_LDD)
*/
/*!
**     @brief
**         Clears (set to zero) the output value. It is equivalent to
**         the [PutVal(FALSE)]. This method is available only if the
**         direction = _[output]_ or _[input/output]_.
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure returned by <Init> method.
*/
/* ===================================================================*/
void BitIoLdd4_ClrVal(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  BitIoLdd4_SetVal (component BitIO_LDD)
*/
/*!
**     @brief
**         Sets (to one) the output value. It is equivalent to the
**         [PutVal(TRUE)]. This method is available only if the
**         direction = _[output]_ or _[input/output]_.
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure returned by <Init> method.
*/
/* ===================================================================*/
void BitIoLdd4_SetVal(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  BitIoLdd4_NegVal (component BitIO_LDD)
*/
/*!
**     @brief
**         Negates (inverts) the output value. It is equivalent to the
**         [PutVal(!GetVal())]. This method is available only if the
**         direction = _[output]_ or _[input/output]_.
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure returned by <Init> method.
*/
/* ===================================================================*/
void BitIoLdd4_NegVal(LDD_TDeviceData *DeviceDataPtr);

/* END BitIoLdd4. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __BitIoLdd4_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.2 [05.07]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
