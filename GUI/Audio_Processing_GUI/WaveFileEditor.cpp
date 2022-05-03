#include "WaveFileEditor.h"
#include "Controller.h"
#include "ui_WaveFileEditor.h"
#include <iostream>
#include <fstream>
#include <sstream>

WaveFileEditor::WaveFileEditor(QWidget *parent) : QMainWindow(parent), ui(new Ui::WaveFileEditor) {
    ui->setupUi(this);
    ui->screen_1->setVisible(true);
    ui->attributes_1->setVisible(false);
    ui->screen_2->setVisible(false);
    ui->next_1->setStyleSheet("background-color: purple");
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

        std::string fileName;
        std::stringstream ss;
        ss << control.getAttributes();
        std::getline(ss, fileName);
        fileName.erase(fileName.begin(), fileName.begin()+11);
        ui->directory_1->setText("Using: " + QString::fromStdString(fileName)); //awful block of code to remove 'File name:' from getattributes, could have been done better if I just returned the name
        ui->curren_file_2->setText("Using: " + QString::fromStdString(fileName));
    } else {
        ui->input_1->setText("file not found");
        ui->input_1->setAlignment(Qt::AlignCenter);
    }
    fileCheck.close();
}

void WaveFileEditor::on_confirm_2_clicked() {
    std::string filename = ui->directory_2->toPlainText().toStdString();
    std::string out = "";
    if (ui->normalize_2->isChecked()) {
        out += "Normalization, ";
        control.effect("normalize");
    }
    if (ui->echo_2->isChecked()) {
        out += "Echo, ";
//        control.effect("echo");
    }
    if (ui->low_pass_2->isChecked()) {
        out += "Low Pass Filter, ";
//        control.effect("low pass filter");
    }
    if (ui->reverse_2->isChecked()) {
        out += "Reverser, ";
        control.effect("reverse");
    }

    std::string outFile = ui->directory_2->toPlainText().toStdString();
    std::reverse(outFile.begin(), outFile.end());
    if (out != "" && outFile.substr(0, 4) == "vaw.") { // fix this
        out.pop_back();
        out.pop_back();
        control.writeFile(ui->directory_2->toPlainText().toStdString());
        ui->directory_2->setText(QString::fromStdString(out + " applied to " + filename));
        ui->directory_2->setAlignment(Qt::AlignCenter);
    } else {
        ui->directory_2->setText("Error with file path entry");
        ui->directory_2->setAlignment(Qt::AlignCenter);
    }
}

void WaveFileEditor::on_next_1_clicked() {
    std::string file = ui->input_1->toPlainText().toStdString();
    std::ifstream fileCheck(file);
    if (fileCheck.good()) {
        ui->screen_1->setVisible(false);
        ui->screen_2->setVisible(true);
    } else {
        ui->input_1->setText("Please input a valid file");
        ui->input_1->setAlignment(Qt::AlignCenter);
    }

}

void WaveFileEditor::on_back_2_clicked() {
    ui->screen_2->setVisible(false);
    ui->screen_1->setVisible(true);
}
