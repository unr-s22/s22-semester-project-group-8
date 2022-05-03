#ifndef CODE_REVERSER_H
#define CODE_REVERSER_H

#include "Wav.h"
#include "ISignalProcessor.h"
#include <iostream>
#include <vector>

class Reverser: public ISignalProcessor {
public:
    std::vector<std::vector<float>> applyEffect(std::vector<std::vector<float>> data);
};

#endif