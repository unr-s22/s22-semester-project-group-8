#include "IWavModel.h"
#include "Wav.h"
#include "WavWriter.h"
#include <iostream>

void IWavModel::readFile(std::string newFile) {
    wave.readFile(newFile);
}

void IWavModel::writeFile(std::string outFile) {
    wavW.writeToFile(wave, outFile);
}