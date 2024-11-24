/********************************************************************************
** Form generated from reading UI file 'ConfigWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWINDOW_H
#define UI_CONFIGWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWindow
{
public:
    QGroupBox *gbCamera;
    QWidget *layoutWidget;
    QGridLayout *imageparamslayout;
    QLabel *label_4;
    QSpinBox *imgWidthSelector;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *imgHeightSelector;
    QSpinBox *fpsSelector;
    QLabel *label;
    QComboBox *cameraIdSelector;
    QGroupBox *gbImageParams;
    QSlider *sliderGain;
    QLabel *label_6;
    QLabel *label_5;
    QSlider *sliderExposure;
    QPushButton *applyBtn;
    QGroupBox *sendGroupbox;
    QLineEdit *ipField;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *portField;
    QGroupBox *paramsGroupBox;
    QLabel *label_9;
    QLineEdit *distanceField;
    QLabel *label_10;
    QComboBox *modeltypeSelect;
    QCheckBox *landmarkStabChck;
    QLineEdit *fovField;
    QLabel *label_11;
    QPushButton *calibrateBtn;
    QGroupBox *generalGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *updateChckbox;
    QCheckBox *enableTrackingCheckbox;

    void setupUi(QWidget *ConfigWindow)
    {
        if (ConfigWindow->objectName().isEmpty())
            ConfigWindow->setObjectName(QString::fromUtf8("ConfigWindow"));
        ConfigWindow->setWindowModality(Qt::WindowModal);
        ConfigWindow->resize(411, 401);
        ConfigWindow->setMinimumSize(QSize(411, 401));
        ConfigWindow->setMaximumSize(QSize(411, 401));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/newPrefix/logo_256px.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/newPrefix/logo_256px.ico"), QSize(), QIcon::Selected, QIcon::On);
        ConfigWindow->setWindowIcon(icon);
        gbCamera = new QGroupBox(ConfigWindow);
        gbCamera->setObjectName(QString::fromUtf8("gbCamera"));
        gbCamera->setGeometry(QRect(10, 20, 191, 281));
        layoutWidget = new QWidget(gbCamera);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 151, 111));
        imageparamslayout = new QGridLayout(layoutWidget);
        imageparamslayout->setSpacing(6);
        imageparamslayout->setContentsMargins(11, 11, 11, 11);
        imageparamslayout->setObjectName(QString::fromUtf8("imageparamslayout"));
        imageparamslayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        imageparamslayout->addWidget(label_4, 2, 0, 1, 1);

        imgWidthSelector = new QSpinBox(layoutWidget);
        imgWidthSelector->setObjectName(QString::fromUtf8("imgWidthSelector"));
        imgWidthSelector->setMinimum(-1);
        imgWidthSelector->setMaximum(3000);
        imgWidthSelector->setValue(-1);

        imageparamslayout->addWidget(imgWidthSelector, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        imageparamslayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        imageparamslayout->addWidget(label_2, 4, 0, 1, 1);

        imgHeightSelector = new QSpinBox(layoutWidget);
        imgHeightSelector->setObjectName(QString::fromUtf8("imgHeightSelector"));
        imgHeightSelector->setMinimum(-1);
        imgHeightSelector->setMaximum(3000);
        imgHeightSelector->setValue(-1);

        imageparamslayout->addWidget(imgHeightSelector, 3, 1, 1, 1);

        fpsSelector = new QSpinBox(layoutWidget);
        fpsSelector->setObjectName(QString::fromUtf8("fpsSelector"));
        fpsSelector->setMinimum(-1);
        fpsSelector->setMaximum(120);
        fpsSelector->setValue(-1);

        imageparamslayout->addWidget(fpsSelector, 4, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        imageparamslayout->addWidget(label, 1, 0, 1, 1);

        cameraIdSelector = new QComboBox(layoutWidget);
        cameraIdSelector->setObjectName(QString::fromUtf8("cameraIdSelector"));

        imageparamslayout->addWidget(cameraIdSelector, 1, 1, 1, 1);

        gbImageParams = new QGroupBox(gbCamera);
        gbImageParams->setObjectName(QString::fromUtf8("gbImageParams"));
        gbImageParams->setGeometry(QRect(20, 150, 151, 121));
        gbImageParams->setCheckable(true);
        gbImageParams->setChecked(false);
        sliderGain = new QSlider(gbImageParams);
        sliderGain->setObjectName(QString::fromUtf8("sliderGain"));
        sliderGain->setGeometry(QRect(10, 40, 131, 20));
        sliderGain->setMinimum(1);
        sliderGain->setMaximum(64);
        sliderGain->setOrientation(Qt::Horizontal);
        sliderGain->setInvertedAppearance(false);
        sliderGain->setInvertedControls(false);
        sliderGain->setTickPosition(QSlider::TicksAbove);
        label_6 = new QLabel(gbImageParams);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 68, 47, 13));
        label_5 = new QLabel(gbImageParams);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 47, 13));
        sliderExposure = new QSlider(gbImageParams);
        sliderExposure->setObjectName(QString::fromUtf8("sliderExposure"));
        sliderExposure->setGeometry(QRect(10, 88, 131, 20));
        sliderExposure->setMaximum(254);
        sliderExposure->setValue(144);
        sliderExposure->setOrientation(Qt::Horizontal);
        sliderExposure->setTickPosition(QSlider::TicksAbove);
        gbImageParams->raise();
        layoutWidget->raise();
        applyBtn = new QPushButton(ConfigWindow);
        applyBtn->setObjectName(QString::fromUtf8("applyBtn"));
        applyBtn->setGeometry(QRect(10, 360, 381, 31));
        sendGroupbox = new QGroupBox(ConfigWindow);
        sendGroupbox->setObjectName(QString::fromUtf8("sendGroupbox"));
        sendGroupbox->setEnabled(true);
        sendGroupbox->setGeometry(QRect(210, 21, 191, 71));
        sendGroupbox->setCheckable(true);
        sendGroupbox->setChecked(false);
        ipField = new QLineEdit(sendGroupbox);
        ipField->setObjectName(QString::fromUtf8("ipField"));
        ipField->setGeometry(QRect(90, 20, 91, 15));
        ipField->setAcceptDrops(false);
        ipField->setLayoutDirection(Qt::LeftToRight);
        label_7 = new QLabel(sendGroupbox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 21, 10));
        label_8 = new QLabel(sendGroupbox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 50, 21, 10));
        portField = new QLineEdit(sendGroupbox);
        portField->setObjectName(QString::fromUtf8("portField"));
        portField->setGeometry(QRect(140, 50, 41, 15));
        portField->setLayoutDirection(Qt::LeftToRight);
        paramsGroupBox = new QGroupBox(ConfigWindow);
        paramsGroupBox->setObjectName(QString::fromUtf8("paramsGroupBox"));
        paramsGroupBox->setGeometry(QRect(210, 100, 191, 181));
        label_9 = new QLabel(paramsGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 21, 61, 18));
        distanceField = new QLineEdit(paramsGroupBox);
        distanceField->setObjectName(QString::fromUtf8("distanceField"));
        distanceField->setGeometry(QRect(90, 22, 61, 20));
        label_10 = new QLabel(paramsGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 76, 121, 16));
        modeltypeSelect = new QComboBox(paramsGroupBox);
        modeltypeSelect->setObjectName(QString::fromUtf8("modeltypeSelect"));
        modeltypeSelect->setGeometry(QRect(27, 94, 121, 22));
        landmarkStabChck = new QCheckBox(paramsGroupBox);
        landmarkStabChck->setObjectName(QString::fromUtf8("landmarkStabChck"));
        landmarkStabChck->setGeometry(QRect(13, 118, 131, 31));
        landmarkStabChck->setToolTipDuration(-1);
        landmarkStabChck->setChecked(true);
        fovField = new QLineEdit(paramsGroupBox);
        fovField->setObjectName(QString::fromUtf8("fovField"));
        fovField->setGeometry(QRect(90, 51, 60, 20));
        label_11 = new QLabel(paramsGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 50, 71, 18));
        calibrateBtn = new QPushButton(paramsGroupBox);
        calibrateBtn->setObjectName(QString::fromUtf8("calibrateBtn"));
        calibrateBtn->setGeometry(QRect(50, 150, 101, 23));
        calibrateBtn->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        generalGroupBox = new QGroupBox(ConfigWindow);
        generalGroupBox->setObjectName(QString::fromUtf8("generalGroupBox"));
        generalGroupBox->setGeometry(QRect(210, 280, 191, 71));
        verticalLayout = new QVBoxLayout(generalGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        updateChckbox = new QCheckBox(generalGroupBox);
        updateChckbox->setObjectName(QString::fromUtf8("updateChckbox"));
        updateChckbox->setToolTipDuration(-1);
        updateChckbox->setChecked(true);

        verticalLayout->addWidget(updateChckbox);

        enableTrackingCheckbox = new QCheckBox(generalGroupBox);
        enableTrackingCheckbox->setObjectName(QString::fromUtf8("enableTrackingCheckbox"));

        verticalLayout->addWidget(enableTrackingCheckbox);


        retranslateUi(ConfigWindow);

        QMetaObject::connectSlotsByName(ConfigWindow);
    } // setupUi

    void retranslateUi(QWidget *ConfigWindow)
    {
        ConfigWindow->setWindowTitle(QCoreApplication::translate("ConfigWindow", "ConfigWindow", nullptr));
        gbCamera->setTitle(QCoreApplication::translate("ConfigWindow", "Camera", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigWindow", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigWindow", "Height", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigWindow", "FPS", nullptr));
        label->setText(QCoreApplication::translate("ConfigWindow", "Camera", nullptr));
        gbImageParams->setTitle(QCoreApplication::translate("ConfigWindow", "Custom brightness", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigWindow", "Exposure", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigWindow", "Gain", nullptr));
        applyBtn->setText(QCoreApplication::translate("ConfigWindow", "Apply", nullptr));
        sendGroupbox->setTitle(QCoreApplication::translate("ConfigWindow", "Use remote OpenTrack client", nullptr));
#if QT_CONFIG(tooltip)
        ipField->setToolTip(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p>IP address where Opentrack is running. Leave empty for using local PC IP address.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ipField->setWhatsThis(QCoreApplication::translate("ConfigWindow", "asadf", nullptr));
#endif // QT_CONFIG(whatsthis)
        ipField->setText(QCoreApplication::translate("ConfigWindow", "192.168.1.10", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigWindow", "IP", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigWindow", "Port", nullptr));
        portField->setText(QCoreApplication::translate("ConfigWindow", "4242", nullptr));
        paramsGroupBox->setTitle(QCoreApplication::translate("ConfigWindow", "Tracker parameters", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigWindow", "Distance (m)", nullptr));
        distanceField->setText(QString());
        label_10->setText(QCoreApplication::translate("ConfigWindow", "Model type", nullptr));
#if QT_CONFIG(tooltip)
        landmarkStabChck->setToolTip(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Experimental</span></p><p>Apply a filter to reduce noise on the recognized facial landmarks. Can reduce noise and thus, make you able to reduce the amount of Acella fitlering in Opentrack, gaining responsiveness.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        landmarkStabChck->setText(QCoreApplication::translate("ConfigWindow", "Landmark stabilization", nullptr));
        fovField->setText(QString());
        label_11->setText(QCoreApplication::translate("ConfigWindow", "Camera FOV", nullptr));
        calibrateBtn->setText(QCoreApplication::translate("ConfigWindow", "Calibrate Face", nullptr));
        generalGroupBox->setTitle(QCoreApplication::translate("ConfigWindow", "General", nullptr));
#if QT_CONFIG(tooltip)
        updateChckbox->setToolTip(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p>Check for a newer version of the program on GitHub and notify me if available.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        updateChckbox->setText(QCoreApplication::translate("ConfigWindow", "Autocheck updates", nullptr));
        enableTrackingCheckbox->setText(QCoreApplication::translate("ConfigWindow", "Start/Stop Tracking shortcut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigWindow: public Ui_ConfigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
