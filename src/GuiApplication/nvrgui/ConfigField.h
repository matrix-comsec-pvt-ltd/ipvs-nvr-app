#ifndef CONFIGFIELD_H
#define CONFIGFIELD_H

// cnfg field no According to CMS comm. module
typedef enum
{
    FIELD_DEV_NAME = 0,
    FIELD_SINGL_FILE_REC_DUR,
    FIELD_AUTO_LOGOUT_TIME_DUR,
    FIELD_AUTO_POWER,
    FIELD_HTTP_PORT,
    FIELD_TCP_PORT,
    FIELD_RTP_START_PORT,
    FIELD_RTP_END_PORT,
    FIELD_DEV_NO = 9,
    FIELD_VIDEO_STD,
    FIELD_INTGT_COSEC,
    FIELD_DATE_FORMAT,
    FIELD_TIME_FORMAT,
    FIELD_RECORDING_FORMAT,
    FIELD_CNG_ANALOG_CAM,
    FIELD_CNG_IP_CAM,
    FIELD_AUTO_CONFIG,
    FIELD_INT_WITH_SAMAS_FLAG = 38,
    FIELD_INT_WITH_SAMAS_IP,
    FIELD_INT_WITH_SAMAS_PORT,
    FIELD_AUTO_CLOSE_REC_FAIL_ALERT,
    FIELD_VIDEO_POP_UP_DURATION,
    FIELD_PRE_VIDEO_LOSS_DURATION,
    FIELD_AUTO_CONFIG_USERNAME,
    FIELD_AUTO_CONFIG_PASSWORD,
    FIELD_START_LIVE_VIEW_FLAG,
    FIELD_FORWD_TCP_PORT,
    FIELD_AUTO_ADD_CAM = 48,
    FIELD_NETWORK_ACCELERATION = 52,
    MAX_FIELD_NO = 53
}CNFG_FIELD_NO_e;

// Adaptive Recording Setting Configuration Table ID 54
typedef enum
{
    ADPT_REC_ENABLE_FIELD,      //1
    ADPT_REC_COPY_TO_CAM_FIELD, //2
    ADPT_REC_ENTIRE_DAY,        //3
    ADPT_REC_START_TIME1,       //4
    ADPT_REC_STOP_TIME1,        //5
    ADPT_REC_START_TIME2,       //6
    ADPT_REC_STOP_TIME2,        //7
    ADPT_REC_START_TIME3,       //8
    ADPT_REC_STOP_TIME3,        //9
    ADPT_REC_START_TIME4,       //10
    ADPT_REC_STOP_TIME4,        //11
    ADPT_REC_START_TIME5,       //12
    ADPT_REC_STOP_TIME5,        //13
    ADPT_REC_START_TIME6,       //14
    ADPT_REC_STOP_TIME6,        //15
    ADPT_REC_ADPT_CPY_TO_CAMERA, //16
    MAX_ADPT_REC_FIELD
}ADPT_REC_CFG_FIELD_e;

//Date and Time Page Table ID-2
typedef enum
{
    FIELD_TIME_ZONE,
    FIELD_NTP_AUTO_SYNC,
    FIELD_NTP_SERVER,
    FIELD_OTHER_SERVER,
    FIELD_UPDATE_INTERVAL,
    FIELD_AUTO_UPDATE_REGIONAL,
    FIELD_AUTO_UPDATE_TIMEZONE,
	FIELD_SYNC_CAM_TIME_OPTION,
    MAX_DATE_TIME_FIELD_NO
}CNFG_DATE_TIME_FIELD_NO_e;

#endif // CONFIGFIELD_H


