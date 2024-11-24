/********************************************************************************
** Form generated from reading UI file 'HeadCalibrationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADCALIBRATIONWINDOW_H
#define UI_HEADCALIBRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalibrateWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *cameraView;
    QPushButton *calibrateBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CalibrateWindow)
    {
        if (CalibrateWindow->objectName().isEmpty())
            CalibrateWindow->setObjectName(QString::fromUtf8("CalibrateWindow"));
        CalibrateWindow->resize(488, 406);
        CalibrateWindow->setMinimumSize(QSize(488, 406));
        CalibrateWindow->setMaximumSize(QSize(488, 406));
        CalibrateWindow->setLayoutDirection(Qt::LeftToRight);
        CalibrateWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralwidget = new QWidget(CalibrateWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 461, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(1, 4, 2, 1);
        cameraView = new QLabel(layoutWidget);
        cameraView->setObjectName(QString::fromUtf8("cameraView"));
        cameraView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cameraView->sizePolicy().hasHeightForWidth());
        cameraView->setSizePolicy(sizePolicy1);
        cameraView->setMinimumSize(QSize(400, 280));
        cameraView->setMaximumSize(QSize(400, 280));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Mono"));
        font.setPointSize(24);
        cameraView->setFont(font);
        cameraView->setLayoutDirection(Qt::LeftToRight);
        cameraView->setStyleSheet(QString::fromUtf8(""));
        cameraView->setFrameShape(QFrame::NoFrame);
        cameraView->setFrameShadow(QFrame::Plain);
        cameraView->setScaledContents(false);
        cameraView->setAlignment(Qt::AlignCenter);
        cameraView->setWordWrap(true);
        cameraView->setMargin(4);

        verticalLayout->addWidget(cameraView);

        calibrateBtn = new QPushButton(layoutWidget);
        calibrateBtn->setObjectName(QString::fromUtf8("calibrateBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(calibrateBtn->sizePolicy().hasHeightForWidth());
        calibrateBtn->setSizePolicy(sizePolicy2);
        calibrateBtn->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        calibrateBtn->setFont(font1);
        calibrateBtn->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(calibrateBtn);

        CalibrateWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CalibrateWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CalibrateWindow->setStatusBar(statusbar);

        retranslateUi(CalibrateWindow);

        QMetaObject::connectSlotsByName(CalibrateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CalibrateWindow)
    {
        CalibrateWindow->setWindowTitle(QCoreApplication::translate("CalibrateWindow", "Head Calibration", nullptr));
        cameraView->setText(QCoreApplication::translate("CalibrateWindow", "<html><head/><body><p align=\"center\">Look directly at the camera, click &quot;Calibrate&quot; and wait a few seconds</p><p><br/></p></body></html>", nullptr));
        calibrateBtn->setText(QCoreApplication::translate("CalibrateWindow", "Calibrate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrateWindow: public Ui_CalibrateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADCALIBRATIONWINDOW_H
