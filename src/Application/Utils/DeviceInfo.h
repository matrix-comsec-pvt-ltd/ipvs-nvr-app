#if !defined DEVICE_INFO_H
#define DEVICE_INFO_H
//#################################################################################################
// FILE BRIEF
//#################################################################################################
/**
@file		DeviceInfo.h
@brief      This file describes API and data structures to get device information.
*/
//#################################################################################################
// @INCLUDES
//#################################################################################################
/* Application Includes */
#include "MxTypedef.h"

//#################################################################################################
// @DEFINES
//#################################################################################################
#define DEVICE_SW_VERSION_LEN_MAX   12
#define DEVICE_MODEL_STR_LEN_MAX    10

#define SINGLE_ETHERNET_PORT        1
#define DUAL_ETHERNET_PORT          2

//#################################################################################################
// @PROTOTYPES
//#################################################################################################
//-------------------------------------------------------------------------------------------------
void InitDeviceInfo(void);
//-------------------------------------------------------------------------------------------------
void GetNvrDeviceInfo(NVR_DEVICE_INFO_t *pDeviceInfo);
//-------------------------------------------------------------------------------------------------
const CHAR *GetNvrModelStr(void);
//-------------------------------------------------------------------------------------------------
UINT8 getMaxCameraForCurrentVariant(void);
//-------------------------------------------------------------------------------------------------
UINT8 getMaxHardDiskForCurrentVariant(void);
//-------------------------------------------------------------------------------------------------
NVR_VARIANT_e GetNvrModelType(void);
//-------------------------------------------------------------------------------------------------
const CHAR *GetBuildDateTimeStr(void);
//-------------------------------------------------------------------------------------------------
const CHAR *GetSoftwareVersionStr(void);
//-------------------------------------------------------------------------------------------------
const CHAR *GetNvrDeviceInfoStr(void);
//-------------------------------------------------------------------------------------------------
UINT8 GetNoOfLanPort(void);
//-------------------------------------------------------------------------------------------------
BOOL IsAudioInPortAvailable(void);
//-------------------------------------------------------------------------------------------------
BOOL IsAudioOutPortAvailable(void);
//-------------------------------------------------------------------------------------------------
UINT8 GetNoOfSensorInput(void);
//-------------------------------------------------------------------------------------------------
UINT8 GetNoOfAlarmOutput(void);
//-------------------------------------------------------------------------------------------------
//#################################################################################################
// @END OF FILE
//#################################################################################################
#endif  // DEVICE_INFO_H