#ifndef CODE_REVERSER_H
#define CODE_REVERSER_H

#include "Wav.h"
#include <iostream>
#include <vector>

class Reverser {
public:
    std::vector<std::vector<float>> reverseData(std::vector<std::vector<float>> data);
};

#endif