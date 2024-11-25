#ifndef UILOGSERVER_H
#define UILOGSERVER_H

#include "../../DecoderLib/include/MxTypedef.h"

//-------------------------------------------------------------------------------------------------
void InitUiLogServer(void);
//-------------------------------------------------------------------------------------------------
void DeInitUiLogServer(void);
//-------------------------------------------------------------------------------------------------
BOOL RecvMessage(INT32 connFd, CHARPTR rcvMsg, UINT32 rcvLen, UINT32 timeout);
//-------------------------------------------------------------------------------------------------
void CloseSocket(INT32PTR connFd);
//-------------------------------------------------------------------------------------------------
#endif
