#if !defined P2P_INTERFACE_H
#define P2P_INTERFACE_H

//#################################################################################################
// FILE BRIEF
//#################################################################################################
/**
@file		P2pInterface.h
@brief      File containing the prototype of interface level functions for other module who wants
            access P2P module service
*/
//#################################################################################################
// @INCLUDES
//#################################################################################################
/* Application Includes */
#include "Config.h"

//#################################################################################################
// @DATA TYPES
//#################################################################################################
typedef enum
{
    P2P_STATUS_DISABLED = 0,
    P2P_STATUS_TRYING,
    P2P_STATUS_CONNECTED,
    P2P_STATUS_NOT_CONNECTED,
    P2P_STATUS_MAX
}P2P_STATUS_e;

typedef enum
{
    P2P_CLIENT_FD_TYPE_TWO_WAY_AUDIO = 0,
    /*P2P_CLIENT_FD_TYPE_FILE_TRANSFER,*/
    P2P_CLIENT_FD_TYPE_MAX

}P2P_CLIENT_FD_TYPE_e;

//#################################################################################################
// @PROTOTYPES
//#################################################################################################
//-------------------------------------------------------------------------------------------------
void InitP2pModule(void);
//-------------------------------------------------------------------------------------------------
void DeInitP2pModule(void);
//-------------------------------------------------------------------------------------------------
void P2pConfigNotify(P2P_CONFIG_t newP2PConfig, P2P_CONFIG_t *oldP2PConfig);
//-------------------------------------------------------------------------------------------------
BOOL GetP2pStatus(void);
//-------------------------------------------------------------------------------------------------
void P2pLanConfigUpdate(LAN_CONFIG_ID_e lanNo);
//-------------------------------------------------------------------------------------------------
void P2pMobileBroadbandCfgUpdate(void);
//-------------------------------------------------------------------------------------------------
void P2pUpdateDefaultRoute(STATIC_ROUTING_CONFIG_t newCopy, STATIC_ROUTING_CONFIG_t *oldCopy);
//-------------------------------------------------------------------------------------------------
void P2pDateTimeCfgUpdate(DATE_TIME_CONFIG_t newCopy, DATE_TIME_CONFIG_t *oldCopy);
//-------------------------------------------------------------------------------------------------
BOOL P2pCmdSendCallback(INT32 connFd, UINT8 *pSendBuff, UINT32 sendLen, UINT32 timeout);
//-------------------------------------------------------------------------------------------------
BOOL P2pDataSendCallback(INT32 connFd, UINT8 *pSendBuff, UINT32 sendLen, UINT32 timeout);
//-------------------------------------------------------------------------------------------------
void P2pCloseConnCallback(INT32 *pConnFd);
//-------------------------------------------------------------------------------------------------
BOOL GetP2pDataXferFd(P2P_CLIENT_FD_TYPE_e fdType, INT32 localMsgUid, INT32 *pDataRecvFd);
//-------------------------------------------------------------------------------------------------
void CloseP2pDataXferFd(P2P_CLIENT_FD_TYPE_e fdType);
//-------------------------------------------------------------------------------------------------
//#################################################################################################
// @END OF FILE
//#################################################################################################
#endif