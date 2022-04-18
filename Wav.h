#ifndef CODE_WAV_H
#define CODE_WAV_H

#include "WavHeader.h"
#include <iostream>
#include <vector>

class Wav {
    std::string fileName;
    wav_header header;
    std::vector<std::vector<float>> data = {{}}; //2d vector
public:

    Wav(std::string file);
    void readFile();
    void makeFile();
};

#endif