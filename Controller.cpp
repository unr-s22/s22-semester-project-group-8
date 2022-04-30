#include "Controller.h"
#include "IWavModel.h"
#include "ISignalProcessor.h"

void Controller::readFile(std::string newFile) {
    WavModel.readFile(newFile);
}

void Controller::writeFile(std::string outFile) {
    WavModel.writeFile(outFile);
}

void Controller::reverse() {
    WavModel.setData(SignalProcessor.reverse(WavModel.getData()));
}

void Controller::normalize() {
    WavModel.setData(SignalProcessor.normalize(WavModel.getData()));
}