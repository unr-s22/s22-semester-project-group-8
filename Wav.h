#ifndef CODE_WAV_H
#define CODE_WAV_H

#include "WavHeader.h"
#include <iostream>
#include <vector>

class Wav {
    wav_header header;
    std::vector<std::vector<float>> data = {{}}; //2d vector
public:
    void readFile(std::string fileName);
    void setData(std::vector<std::vector<float>> newData);
    std::vector<std::vector<float>> getData();
    wav_header getHeader();
};

#endif