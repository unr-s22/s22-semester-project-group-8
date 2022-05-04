#ifndef CODE_ECHO_H
#define CODE_ECHO_H

#include "ISignalProcessor.h"
#include <vector>

class Echo: public ISignalProcessor {
public:
    std::vector<std::vector<float>> applyEffect(const std::vector<std::vector<float>> input);
};

#endif 
