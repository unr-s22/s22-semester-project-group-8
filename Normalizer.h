#ifndef CODE_NORMALIZER_H
#define CODE_NORMALIZER_H

#include "Wav.h"
#include <iostream>
#include <vector>

class Normalizer {
public:
    std::vector<std::vector<float>> normalizeData(std::vector<std::vector<float>> data);
};

#endif