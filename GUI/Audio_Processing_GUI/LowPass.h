#ifndef CODE_LOWPASS_H
#define CODE_LOWPASS_H

#include "ISignalProcessor.h"
#include <vector>

class LowPass: public ISignalProcessor {
public:
    std::vector<std::vector<float>> applyEffect(const std::vector<std::vector<float>> input);
};

#endif 
