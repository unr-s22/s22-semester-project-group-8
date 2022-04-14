#ifndef CODE_WAV_H
#define CODE_WAV_H

#include "WavHeader.h"
#include <iostream>

class Wav {
    std::string fileName;
    wav_header header;
public:

    Wav(std::string file);
    void readFile();
};

#endif