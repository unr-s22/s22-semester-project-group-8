#ifndef CODE_WAVREADER_H
#define CODE_WAVREADER_H

#include "WavHeader.h"
#include "Wav.h"
#include <iostream>
#include <vector>


class WavReader {
    std::string fileName;
    wav_header header;
    std::vector<std::vector<float>> data = {{}};
public:
    WavReader(std::string fileName);
    void readFile(Wav wave);
};


#endif