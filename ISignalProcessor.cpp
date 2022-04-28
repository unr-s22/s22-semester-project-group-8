#include "Reverser.h"
#include "Normalizer.h"
#include "ISignalProcessor.h"

void ISignalProcessor::normalize(std::vector<std::vector<float>> data) {
    norm.normalizeData(data);
}

void ISignalProcessor::reverse(std::vector<std::vector<float>> data) {
    rev.reverseData(data);
}