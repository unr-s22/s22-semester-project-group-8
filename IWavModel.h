#ifndef CODE_IWAVMODEL_H
#define CODE_IWAVMODEL_H

#include "Wav.h"
#include "WavWriter.h"
#include <iostream>

class IWavModel {
    Wav wave;
    WavWriter wavW;
public:
    void readFile(std::string newFile);
    void writeFile(std::string outFile);
    void setData(std::vector<std::vector<float>> newData);
    std::vector<std::vector<float>> getData();
};

#endif