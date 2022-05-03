/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaveFileEditor
{
public:
    QWidget *centralwidget;
    QFrame *screen_1;
    QLabel *directory_1;
    QPushButton *exit_1;
    QTextEdit *input_1;
    QLabel *welcome_1;
    QPushButton *confirm_1;
    QFrame *screen_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WaveFileEditor)
    {
        if (WaveFileEditor->objectName().isEmpty())
            WaveFileEditor->setObjectName(QString::fromUtf8("WaveFileEditor"));
        WaveFileEditor->setEnabled(true);
        WaveFileEditor->resize(960, 540);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(95, 0, 102, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(39, 39, 39, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(36, 37, 37, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(15, 15, 15, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(200, 0, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(29, 30, 30, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush8(QColor(169, 2, 206, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        QBrush brush9(QColor(14, 15, 15, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(208, 208, 208, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        QBrush brush12(QColor(64, 65, 66, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush13(QColor(227, 227, 227, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        QBrush brush14(QColor(160, 160, 160, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        QBrush brush15(QColor(255, 51, 51, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        QBrush brush16(QColor(46, 47, 48, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        QBrush brush17(QColor(105, 105, 105, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        QBrush brush18(QColor(29, 84, 92, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush18);
        QBrush brush19(QColor(53, 54, 55, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush19);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush11);
        WaveFileEditor->setPalette(palette);
        WaveFileEditor->setAutoFillBackground(false);
        centralwidget = new QWidget(WaveFileEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        screen_1 = new QFrame(centralwidget);
        screen_1->setObjectName(QString::fromUtf8("screen_1"));
        screen_1->setEnabled(true);
        screen_1->setGeometry(QRect(0, 0, 960, 500));
        screen_1->setAutoFillBackground(false);
        screen_1->setFrameShape(QFrame::StyledPanel);
        screen_1->setFrameShadow(QFrame::Raised);
        directory_1 = new QLabel(screen_1);
        directory_1->setObjectName(QString::fromUtf8("directory_1"));
        directory_1->setGeometry(QRect(350, 195, 260, 30));
        QFont font;
        font.setPointSize(18);
        directory_1->setFont(font);
        directory_1->setAlignment(Qt::AlignCenter);
        exit_1 = new QPushButton(screen_1);
        exit_1->setObjectName(QString::fromUtf8("exit_1"));
        exit_1->setGeometry(QRect(850, 0, 110, 50));
        QPalette palette1;
        QBrush brush20(QColor(35, 35, 35, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        exit_1->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(22);
        font1.setBold(false);
        exit_1->setFont(font1);
        exit_1->setIconSize(QSize(16, 16));
        exit_1->setCheckable(false);
        input_1 = new QTextEdit(screen_1);
        input_1->setObjectName(QString::fromUtf8("input_1"));
        input_1->setGeometry(QRect(310, 230, 340, 40));
        QFont font2;
        font2.setPointSize(12);
        input_1->setFont(font2);
        input_1->setAutoFillBackground(true);
        welcome_1 = new QLabel(screen_1);
        welcome_1->setObjectName(QString::fromUtf8("welcome_1"));
        welcome_1->setGeometry(QRect(275, 140, 410, 50));
        QFont font3;
        font3.setPointSize(40);
        welcome_1->setFont(font3);
        welcome_1->setFrameShape(QFrame::NoFrame);
        welcome_1->setAlignment(Qt::AlignCenter);
        confirm_1 = new QPushButton(screen_1);
        confirm_1->setObjectName(QString::fromUtf8("confirm_1"));
        confirm_1->setGeometry(QRect(430, 280, 100, 30));
        screen_2 = new QFrame(centralwidget);
        screen_2->setObjectName(QString::fromUtf8("screen_2"));
        screen_2->setGeometry(QRect(0, 0, 960, 500));
        screen_2->setFrameShape(QFrame::StyledPanel);
        screen_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(screen_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 350, 80, 24));
        WaveFileEditor->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(WaveFileEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WaveFileEditor->setStatusBar(statusbar);

        retranslateUi(WaveFileEditor);

        QMetaObject::connectSlotsByName(WaveFileEditor);
    } // setupUi

    void retranslateUi(QMainWindow *WaveFileEditor)
    {
        WaveFileEditor->setWindowTitle(QCoreApplication::translate("WaveFileEditor", "HomePage", nullptr));
        directory_1->setText(QCoreApplication::translate("WaveFileEditor", "Enter wave file directory:", nullptr));
        exit_1->setText(QCoreApplication::translate("WaveFileEditor", "Exit", nullptr));
        input_1->setHtml(QCoreApplication::translate("WaveFileEditor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Enter file here</span></p></body></html>", nullptr));
        welcome_1->setText(QCoreApplication::translate("WaveFileEditor", "Wave File Editor", nullptr));
        confirm_1->setText(QCoreApplication::translate("WaveFileEditor", "Confirm", nullptr));
        pushButton->setText(QCoreApplication::translate("WaveFileEditor", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaveFileEditor: public Ui_WaveFileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
