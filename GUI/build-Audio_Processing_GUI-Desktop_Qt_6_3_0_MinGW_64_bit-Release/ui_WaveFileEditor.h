/********************************************************************************
** Form generated from reading UI file 'WaveFileEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEFILEEDITOR_H
#define UI_WAVEFILEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QTextBrowser *attributes_1;
    QPushButton *next_1;
    QFrame *screen_2;
    QPushButton *normalize_2;
    QPushButton *echo_2;
    QPushButton *low_pass_2;
    QPushButton *reverse_2;
    QPushButton *exit_2;
    QLabel *out_prompt_2;
    QTextEdit *directory_2;
    QPushButton *confirm_2;
    QPushButton *back_2;
    QLabel *curren_file_2;
    QLabel *welcome_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WaveFileEditor)
    {
        if (WaveFileEditor->objectName().isEmpty())
            WaveFileEditor->setObjectName(QString::fromUtf8("WaveFileEditor"));
        WaveFileEditor->setEnabled(true);
        WaveFileEditor->resize(960, 540);
        QPalette palette;
        WaveFileEditor->setPalette(palette);
        WaveFileEditor->setAutoFillBackground(false);
        centralwidget = new QWidget(WaveFileEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        screen_1 = new QFrame(centralwidget);
        screen_1->setObjectName(QString::fromUtf8("screen_1"));
        screen_1->setEnabled(true);
        screen_1->setGeometry(QRect(0, 0, 960, 500));
        screen_1->setAcceptDrops(false);
        screen_1->setAutoFillBackground(true);
        screen_1->setFrameShape(QFrame::StyledPanel);
        screen_1->setFrameShadow(QFrame::Raised);
        directory_1 = new QLabel(screen_1);
        directory_1->setObjectName(QString::fromUtf8("directory_1"));
        directory_1->setGeometry(QRect(230, 195, 500, 35));
        QFont font;
        font.setPointSize(18);
        directory_1->setFont(font);
        directory_1->setAlignment(Qt::AlignCenter);
        exit_1 = new QPushButton(screen_1);
        exit_1->setObjectName(QString::fromUtf8("exit_1"));
        exit_1->setGeometry(QRect(850, 0, 110, 50));
        QPalette palette1;
        QBrush brush(QColor(35, 35, 35, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(64, 65, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
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
        input_1->setGeometry(QRect(230, 235, 500, 40));
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
        attributes_1 = new QTextBrowser(screen_1);
        attributes_1->setObjectName(QString::fromUtf8("attributes_1"));
        attributes_1->setGeometry(QRect(350, 330, 256, 121));
        next_1 = new QPushButton(screen_1);
        next_1->setObjectName(QString::fromUtf8("next_1"));
        next_1->setGeometry(QRect(850, 450, 110, 50));
        QPalette palette2;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(95, 0, 102, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(39, 39, 39, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(36, 37, 37, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(15, 15, 15, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(200, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        QBrush brush9(QColor(29, 30, 30, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush10(QColor(169, 2, 206, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        QBrush brush11(QColor(14, 15, 15, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        QBrush brush13(QColor(208, 208, 208, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush14(QColor(227, 227, 227, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        QBrush brush15(QColor(160, 160, 160, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        QBrush brush16(QColor(255, 51, 51, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        QBrush brush17(QColor(46, 47, 48, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        QBrush brush18(QColor(105, 105, 105, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush18);
        QBrush brush19(QColor(29, 84, 92, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush19);
        QBrush brush20(QColor(53, 54, 55, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush13);
        next_1->setPalette(palette2);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(16);
        font4.setBold(false);
        next_1->setFont(font4);
        next_1->setIconSize(QSize(16, 16));
        next_1->setCheckable(false);
        screen_2 = new QFrame(centralwidget);
        screen_2->setObjectName(QString::fromUtf8("screen_2"));
        screen_2->setEnabled(true);
        screen_2->setGeometry(QRect(0, 0, 960, 500));
        screen_2->setAcceptDrops(false);
        screen_2->setAutoFillBackground(true);
        screen_2->setFrameShape(QFrame::StyledPanel);
        screen_2->setFrameShadow(QFrame::Raised);
        normalize_2 = new QPushButton(screen_2);
        normalize_2->setObjectName(QString::fromUtf8("normalize_2"));
        normalize_2->setGeometry(QRect(290, 180, 150, 55));
        QFont font5;
        font5.setPointSize(16);
        normalize_2->setFont(font5);
        normalize_2->setCheckable(true);
        echo_2 = new QPushButton(screen_2);
        echo_2->setObjectName(QString::fromUtf8("echo_2"));
        echo_2->setGeometry(QRect(520, 180, 150, 55));
        echo_2->setFont(font5);
        echo_2->setCheckable(true);
        low_pass_2 = new QPushButton(screen_2);
        low_pass_2->setObjectName(QString::fromUtf8("low_pass_2"));
        low_pass_2->setGeometry(QRect(520, 260, 150, 55));
        low_pass_2->setFont(font5);
        low_pass_2->setCheckable(true);
        reverse_2 = new QPushButton(screen_2);
        reverse_2->setObjectName(QString::fromUtf8("reverse_2"));
        reverse_2->setGeometry(QRect(290, 260, 150, 55));
        reverse_2->setFont(font5);
        reverse_2->setCheckable(true);
        exit_2 = new QPushButton(screen_2);
        exit_2->setObjectName(QString::fromUtf8("exit_2"));
        exit_2->setGeometry(QRect(850, 0, 110, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        exit_2->setPalette(palette3);
        exit_2->setFont(font1);
        exit_2->setIconSize(QSize(16, 16));
        exit_2->setCheckable(false);
        out_prompt_2 = new QLabel(screen_2);
        out_prompt_2->setObjectName(QString::fromUtf8("out_prompt_2"));
        out_prompt_2->setGeometry(QRect(280, 330, 400, 30));
        out_prompt_2->setFont(font);
        out_prompt_2->setAlignment(Qt::AlignCenter);
        directory_2 = new QTextEdit(screen_2);
        directory_2->setObjectName(QString::fromUtf8("directory_2"));
        directory_2->setGeometry(QRect(210, 365, 540, 80));
        QFont font6;
        font6.setPointSize(14);
        directory_2->setFont(font6);
        confirm_2 = new QPushButton(screen_2);
        confirm_2->setObjectName(QString::fromUtf8("confirm_2"));
        confirm_2->setGeometry(QRect(430, 450, 100, 30));
        back_2 = new QPushButton(screen_2);
        back_2->setObjectName(QString::fromUtf8("back_2"));
        back_2->setGeometry(QRect(850, 450, 110, 50));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush13);
        back_2->setPalette(palette4);
        back_2->setFont(font4);
        back_2->setIconSize(QSize(16, 16));
        back_2->setCheckable(false);
        curren_file_2 = new QLabel(screen_2);
        curren_file_2->setObjectName(QString::fromUtf8("curren_file_2"));
        curren_file_2->setGeometry(QRect(180, 40, 600, 40));
        QFont font7;
        font7.setPointSize(22);
        curren_file_2->setFont(font7);
        curren_file_2->setAlignment(Qt::AlignCenter);
        welcome_2 = new QLabel(screen_2);
        welcome_2->setObjectName(QString::fromUtf8("welcome_2"));
        welcome_2->setGeometry(QRect(220, 90, 520, 50));
        welcome_2->setFont(font3);
        welcome_2->setAlignment(Qt::AlignCenter);
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
        attributes_1->setHtml(QCoreApplication::translate("WaveFileEditor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attributes:</p></body></html>", nullptr));
        next_1->setText(QCoreApplication::translate("WaveFileEditor", "Next", nullptr));
        normalize_2->setText(QCoreApplication::translate("WaveFileEditor", "Normalize", nullptr));
        echo_2->setText(QCoreApplication::translate("WaveFileEditor", "Echo", nullptr));
        low_pass_2->setText(QCoreApplication::translate("WaveFileEditor", "Low Pass Filter", nullptr));
        reverse_2->setText(QCoreApplication::translate("WaveFileEditor", "Reverse", nullptr));
        exit_2->setText(QCoreApplication::translate("WaveFileEditor", "Exit", nullptr));
        out_prompt_2->setText(QCoreApplication::translate("WaveFileEditor", "Enter output file name:", nullptr));
        directory_2->setHtml(QCoreApplication::translate("WaveFileEditor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter output file directory here</p></body></html>", nullptr));
        confirm_2->setText(QCoreApplication::translate("WaveFileEditor", "Confirm", nullptr));
        back_2->setText(QCoreApplication::translate("WaveFileEditor", "Back", nullptr));
        curren_file_2->setText(QCoreApplication::translate("WaveFileEditor", "Current File", nullptr));
        welcome_2->setText(QCoreApplication::translate("WaveFileEditor", "Choose Audio Process", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaveFileEditor: public Ui_WaveFileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEFILEEDITOR_H
