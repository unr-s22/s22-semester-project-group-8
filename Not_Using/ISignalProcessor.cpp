#include "Reverser.h"
#include "Normalizer.h"
#include "ISignalProcessor.h"

std::vector<std::vector<float>> ISignalProcessor::reverse(std::vector<std::vector<float>> data) {
    return rev.reverseData(data);
}

std::vector<std::vector<float>> ISignalProcessor::normalize(std::vector<std::vector<float>> data) {
    return norm.normalizeData(data);
}

