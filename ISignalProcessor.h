#ifndef CODE_ISIGNALPROCESSOR_H
#define CODE_ISIGNALPROCESSOR_H

#include "Reverser.h"
#include "Normalizer.h"
#include <iostream>

class ISignalProcessor {
    Reverser rev;
    Normalizer norm;
public:
    void reverse(std::vector<std::vector<float>> data);
    void normalize(std::vector<std::vector<float>> data);
};

#endif