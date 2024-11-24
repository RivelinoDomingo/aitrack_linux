/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacerTop;
    QVBoxLayout *verticalLayout;
    QLabel *cameraView;
    QPushButton *trackBtn;
    QCheckBox *chkVideoPreview;
    QPushButton *btnConfig;
    QSpacerItem *verticalSpacerBottom;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(420, 459);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(420, 0));
        MainWindow->setMaximumSize(QSize(420, 590));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/logo_256px.ico"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(48, 48));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(420, 0));
        centralwidget->setAcceptDrops(false);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 1);
        verticalSpacerTop = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacerTop);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(2, 4, 2, 1);
        cameraView = new QLabel(centralwidget);
        cameraView->setObjectName(QString::fromUtf8("cameraView"));
        cameraView->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cameraView->sizePolicy().hasHeightForWidth());
        cameraView->setSizePolicy(sizePolicy2);
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

        trackBtn = new QPushButton(centralwidget);
        trackBtn->setObjectName(QString::fromUtf8("trackBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(trackBtn->sizePolicy().hasHeightForWidth());
        trackBtn->setSizePolicy(sizePolicy3);
        trackBtn->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        trackBtn->setFont(font1);
        trackBtn->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(trackBtn);

        chkVideoPreview = new QCheckBox(centralwidget);
        chkVideoPreview->setObjectName(QString::fromUtf8("chkVideoPreview"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(chkVideoPreview->sizePolicy().hasHeightForWidth());
        chkVideoPreview->setSizePolicy(sizePolicy4);
        chkVideoPreview->setToolTipDuration(-1);
        chkVideoPreview->setLayoutDirection(Qt::LeftToRight);
        chkVideoPreview->setAutoFillBackground(false);
        chkVideoPreview->setStyleSheet(QString::fromUtf8("margin-left:150%; "));
        chkVideoPreview->setChecked(true);

        verticalLayout->addWidget(chkVideoPreview);

        btnConfig = new QPushButton(centralwidget);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy5);
        btnConfig->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(10);
        btnConfig->setFont(font2);

        verticalLayout->addWidget(btnConfig);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacerBottom = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacerBottom);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AITrack", nullptr));
        cameraView->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Tracking stopped</p></body></html>", nullptr));
        trackBtn->setText(QCoreApplication::translate("MainWindow", "Start tracking", nullptr));
#if QT_CONFIG(tooltip)
        chkVideoPreview->setToolTip(QCoreApplication::translate("MainWindow", "You can disable the video preview to further reduce the CPU usage of AITrack.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        chkVideoPreview->setWhatsThis(QCoreApplication::translate("MainWindow", "Disables the video preview.", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkVideoPreview->setText(QCoreApplication::translate("MainWindow", "Enable preview", nullptr));
        btnConfig->setText(QCoreApplication::translate("MainWindow", "Configuration \342\232\231\357\270\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
