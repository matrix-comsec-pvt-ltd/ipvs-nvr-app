#ifndef TESTCAMERA_H
#define TESTCAMERA_H

#include <QWidget>
#include "Controls/TextBox.h"
#include "Controls/Closebuttton.h"
#include "Controls/Rectangle.h"
#include "Controls/ImageControls/Image.h"
#include "Controls/PageOpenButton.h"
#include "PayloadLib.h"
#include "Controls/OptionSelectButton.h"
#include "Controls/ReadOnlyElement.h"
#include "ApplController.h"
#include "Controls/InfoPage.h"
#include "Controls/ElementHeading.h"
#include "Controls/TextLabel.h"

typedef enum {

    TEST_CAM_CLS_BTN,
    TEST_CAM_DETAILS_BTN,

    MAX_TEST_CAM_ELEMNTS
}TEST_CAM_ELEMNTS_e;


class TestCamera : public KeyBoard
{
    Q_OBJECT
public:
    explicit TestCamera(quint8 cameraNum,
                        QString cameraName,
                        PayloadLib* payloadLib,
                        QWidget *parent = 0,
                        quint8 idxInPage = 0,
                        CAMERA_TYPE_e camtype = IP_CAMERA);
    ~TestCamera();
    
    void processDeviceResponse(DevCommParam *param, QString deviceName);
    void loadInfoPage(QString);

    void paintEvent (QPaintEvent *);
    void showEvent (QShowEvent *event);
    virtual void navigationKeyPressed(QKeyEvent *event);
    virtual void escKeyPressed(QKeyEvent *event);
    virtual void insertKeyPressed(QKeyEvent *event);
    virtual void tabKeyPressed(QKeyEvent *event);
    virtual void backTab_KeyPressed(QKeyEvent *event);

signals:
    void sigCreateCMDRequest(SET_COMMAND_e,quint8);
    void sigDeleteObject(quint8);
    
public slots:
    void slotButtonClick(int);
    void slotDetailButtonClick(int);
    void slotHideButtonClick(int);
    void slotUpdateCurrentElement(int);
    void slotInfoPageBtnclick(int);

private:
    Rectangle*              m_background;
    CloseButtton*           m_closeButton;
    TextLabel*              m_cameraIdLabel;
    TextLabel*              m_cameraNameLabel;
    Image*                  m_image;
    PageOpenButton*         m_detailsButton;
	PageOpenButton*         m_hideButton;

    ApplController*         m_applController;
    PayloadLib*             m_payloadLib;
    quint8                  m_cameraNumber;
    InfoPage*               m_infoPage;  

    ElementHeading*         m_eventSupportLabel;
    ElementHeading*         m_featureSupportLabel;

    TextLabel*              m_motionLabel;
    TextLabel*              m_viewTemperLabel;
    TextLabel*              m_objectIntrusionLabel;
    TextLabel*              m_tripWireLabel;
    TextLabel*              m_audioExceptionLabel;
    TextLabel*              m_missingLabel;
    TextLabel*              m_suspiciousLabel;
    TextLabel*              m_loiteringLabel;
    TextLabel*              m_objectCntLabel;
    TextLabel*              m_noMotionLabel;
    TextLabel*              m_ptzLabel;
    TextLabel*              m_audioSupportLabel;
    TextLabel*              m_alarmOutputLabel;
    TextLabel*              m_sensorInputLabel;

    OptionSelectButton*     m_motionCheckBox;
    OptionSelectButton*     m_temperCheckBox;
    OptionSelectButton*     m_objectIntrusionCheckBox;
    OptionSelectButton*     m_tripWireCheckBox;
    OptionSelectButton*     m_audioExceptionCheckBox;
    OptionSelectButton*     m_missing_CheckBox;
    OptionSelectButton*     m_suspicious_CheckBox;
    OptionSelectButton*     m_loitering_CheckBox;
    OptionSelectButton*     m_object_cnt_CheckBox;
    OptionSelectButton*     m_noMotionCheckBox;
    OptionSelectButton*     m_ptzCheckBox;
    OptionSelectButton*     m_audioCheckBox;
	
    ReadOnlyElement*        m_sensorInput;
    ReadOnlyElement*        m_alarmOutput;

    NavigationControl*      m_elementlist[MAX_TEST_CAM_ELEMNTS];
    quint8                  m_currElement;
    quint8                  m_indexInPage;
    CAMERA_TYPE_e           m_camType;


    void createDefaultElements(quint8 cameraNum, QString cameraName);

    void takeLeftKeyAction();
    void takeRightKeyAction();
    void deleteInformationElements();
};

#endif // TESTCAMERA_H