#include "WaveFileEditor.h"
#include "Controller.h"
#include "ui_WaveFileEditor.h"
#include <QProcess>
#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

WaveFileEditor::WaveFileEditor(QWidget *parent) : QMainWindow(parent), ui(new Ui::WaveFileEditor) {
    ui->setupUi(this);
    ui->screen_1->setVisible(true);
    ui->attributes_1->setVisible(false);
    ui->screen_2->setVisible(false);
    ui->next_1->setStyleSheet("background-color: purple");
    ui->back_2->setStyleSheet("background-color: purple; color: rgb(255, 255, 255)");
}

WaveFileEditor::~WaveFileEditor() {
    delete ui;
}


void WaveFileEditor::on_exit_1_clicked() {
    qApp->quit();
}

void WaveFileEditor::on_exit_2_clicked() {
    qApp->quit();
}

void WaveFileEditor::on_confirm_1_clicked() {
    std::string file = ui->input_1->toPlainText().toStdString();
    std::ifstream fileCheck(file);
    if (fileCheck.good()) {
        control.readFile(file);

        ui->attributes_1->setVisible(true);
        ui->attributes_1->setText(QString::fromStdString(control.getAttributes()));

        std::string fileName = std::regex_replace(file, std::regex(".*/"), "$1");
        ui->directory_1->setText("Using: " + QString::fromStdString(fileName));
        ui->curren_file_2->setText("Using: " + QString::fromStdString(fileName));
    } else {
        ui->input_1->setText("file not found");
        ui->input_1->setAlignment(Qt::AlignCenter);
    }
    fileCheck.close();
}

bool processed = false;

void WaveFileEditor::on_confirm_2_clicked() {
    std::string filename = ui->directory_2->toPlainText().toStdString();
    if (processed == true) {
        ui->directory_2->setText("Please restart program");
        ui->directory_2->setAlignment(Qt::AlignCenter);
    } else {
        std::string out = "";
        if (ui->normalize_2->isChecked()) { // applies effects
            out += "Normalization, ";
            control.effect("normalize");
        }
        if (ui->echo_2->isChecked()) {
            out += "Echo, ";
            control.effect("echo");
        }
        if (ui->low_pass_2->isChecked()) {
            out += "Low Pass Filter, ";
            control.effect("lowpass");
        }
        if (ui->reverse_2->isChecked()) {
            out += "Reverser, ";
            control.effect("reverse");
        }

        std::string outFile = ui->directory_2->toPlainText().toStdString();
        std::reverse(outFile.begin(), outFile.end());
        if (out != "" && outFile.substr(0, 4) == "vaw.") {
            processed = true;
            out.pop_back();
            out.pop_back();
            control.writeFile(filename);
            ui->directory_2->setText(QString::fromStdString(out + " applied to " + filename)); // text confirming what was applied
            ui->directory_2->setAlignment(Qt::AlignCenter);
        } else {
            ui->directory_2->setText("Error with file path entry"); // if the output is not .wav
            ui->directory_2->setAlignment(Qt::AlignCenter);
        }
    }
}

void WaveFileEditor::on_next_1_clicked() {
    std::string file = ui->input_1->toPlainText().toStdString();
    std::ifstream fileCheck(file);
    if (fileCheck.good()) {
        ui->screen_1->setVisible(false);
        ui->screen_2->setVisible(true);
    } else { // doesnt allow the user to move on without inputting a file
        ui->input_1->setText("Please input a valid file");
        ui->input_1->setAlignment(Qt::AlignCenter);
    }

}

void WaveFileEditor::on_back_2_clicked() {
    ui->screen_2->setVisible(false);
    ui->screen_1->setVisible(true);
}

void WaveFileEditor::on_pushButton_clicked() { // restarts program for easier checking of each effect
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

