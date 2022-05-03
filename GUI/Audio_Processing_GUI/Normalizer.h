#ifndef CODE_NORMALIZER_H
#define CODE_NORMALIZER_H

#include "Wav.h"
#include "ISignalProcessor.h"
#include <iostream>
#include <vector>

class Normalizer: public ISignalProcessor {
public:
    std::vector<std::vector<float>> applyEffect(std::vector<std::vector<float>> data);
};

#endif