#ifndef DICOMMANDHANDLE_H_
#define DICOMMANDHANDLE_H_
//#################################################################################################
// FILE BRIEF
//#################################################################################################
/**
@file		DiCommandHandle.h
@brief      This module provides command handling to communicate with SAMAS
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
	LOGIN_RESP_ARG = 0,
	LOGIN_DEVICE_ID,
	LOGIN_POL_DUR,
	LOGIN_POL_INT,
	MAX_LOGIN_ARG,

}COMMAND_RESP_ARG_e;

typedef enum
{
    LOGIN_CMD = 0,
    LONG_POLL,
    SEND_DID,
    MAX_DI_CMD

}DI_CLIENT_CMD_e;

typedef struct
{
    BOOL    loginState;
    UINT8   pollDuration;
    UINT8   pollInterval;
    UINT32  deviceId;

}LOGIN_RESP_t;

//#################################################################################################
// @PROTOTYPES
//#################################################################################################
//-------------------------------------------------------------------------------------------------
BOOL DiMakeXXXCmd(DI_CLIENT_CMD_e cmdId, CHARPTR msgBuf, UINT16PTR cmdOutLen, VOIDPTR data);
//-------------------------------------------------------------------------------------------------
BOOL DiParseXXXCmdResp(UINT8 msgId, CHARPTR *msgPtr,VOIDPTR respData);
//-------------------------------------------------------------------------------------------------
//#################################################################################################
// @END OF FILE
//#################################################################################################
#endif /* DICOMMANDHANDLE_H_ */