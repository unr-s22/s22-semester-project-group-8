#include "WavModel.h"
#include "Wav.h"
#include "WavHeader.h"
#include "WavWriter.h"
#include <iostream>
#include <sstream>

void WavModel::readFile(std::string newFile) {
    wave.readFile(newFile);
}

void WavModel::writeFile(std::string outFile) {
    wavW.writeToFile(wave, outFile);
}

std::vector<std::vector<float>> WavModel::getData() {
    return wave.getData();
}

void WavModel::setData(std::vector<std::vector<float>> newData) {
    wave.setData(newData);
}

std::string WavModel::getAttributes() {
    std::stringstream attributes;

    std::string name = "";
    for (auto &character: wave.getName()) {
        if (character == '/'){
            name = "";
        } else {
            name += character;
        }
    }
    
    attributes << "File Name: " + name << std::endl;
    attributes << "Sample Rate: " + std::to_string(wave.getHeader().sample_rate) << std::endl;
    attributes << "Bits per Sample: " + std::to_string(wave.getHeader().bits_per_sample) << std::endl;
    if (wave.getHeader().num_channels == 1) {
        attributes << "Format: Mono " << std::endl;
    } else {
        attributes << "Format: Stereo " << std::endl;
    }
    wav_header header = wave.getHeader();
    float length = ((float)header.data_bytes) / ((header.sample_rate * header.num_channels * header.bits_per_sample) / 8);
    if (length > 60) {
        length = length / 60;
        attributes << "Audio Length in Minutes: " + std::to_string(length) << std::endl;
    } else {
        attributes << "Audio Length in Seconds: " + std::to_string(length) << std::endl;
    }
    return attributes.str();
}