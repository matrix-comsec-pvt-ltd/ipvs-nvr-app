#ifndef CAMERACONFIG_H_
#define CAMERACONFIG_H_
//#################################################################################################
// FILE BRIEF
//#################################################################################################
/**
@file		CameraConfig.h
@brief      File containing the declaration related to camera configuration
*/
//#################################################################################################
// @INCLUDES
//#################################################################################################
/* Application Includes */
#include "Config.h"
#include "DebugLog.h"
#include "Utils.h"
#include "NetworkManager.h"
#include "HttpClient.h"
#include "UrlRequest.h"

//#################################################################################################
// @DATA TYPES
//#################################################################################################
//-------------------------------------------------------------------------------------------------
typedef BOOL (*CAMERA_CONFIG_CB)(UINT8 complexCamIndex, STREAM_CONFIG_t * streamConfig, UINT8 profileIndex);
//-------------------------------------------------------------------------------------------------
//#################################################################################################
// @PROTOTYPES
//#################################################################################################
//-------------------------------------------------------------------------------------------------
void InitCameraConfig(void);
//-------------------------------------------------------------------------------------------------
BOOL GetCurrentCameraProfileConfig(CAMERA_REQUEST_t *request, UINT8 complexCamIndex, UINT8 profileIndex, CAMERA_CONFIG_CB callback);
//-------------------------------------------------------------------------------------------------
BOOL SendReqForConfig(CAMERA_REQUEST_t *request, IP_CAMERA_CONFIG_t *ipCamCfg, VIDEO_TYPE_e streamType);
//-------------------------------------------------------------------------------------------------
void HttpStreamConfigCb(HTTP_HANDLE httpHandle, HTTP_DATA_INFO_t *dataInfo);
//-------------------------------------------------------------------------------------------------
void TcpGetStreamProfileCnfgCb(TCP_HANDLE tcpHandle, TCP_DATA_INFO_t *dataInfo);
//-------------------------------------------------------------------------------------------------
//#################################################################################################
// @END OF FILE
//#################################################################################################
#endif /* CAMERACONFIG_H_ */