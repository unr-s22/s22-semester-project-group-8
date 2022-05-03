#ifndef CODE_ISIGNALPROCESSOR_H
#define CODE_ISIGNALPROCESSOR_H

#include <iostream>
#include <vector>

class ISignalProcessor {
public:
    virtual std::vector<std::vector<float>> applyEffect(std::vector<std::vector<float>> data) = 0;
};

#endif