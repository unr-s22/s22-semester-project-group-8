#ifndef CODE_WAVWRITER_H
#define CODE_WAVWRITER_H

#include "WavHeader.h"
#include "Wav.h"
#include <iostream>

class WavWriter {
public:
    void writeToFile(Wav wave, std::string fileName);
};

#endif