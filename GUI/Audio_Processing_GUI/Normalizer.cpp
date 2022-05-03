#include "Normalizer.h"
#include <algorithm>
#include <vector>
#include <cmath>


bool compare(float a, float b) {
    return std::abs(a) < std::abs(b);
}

std::vector<std::vector<float>> Normalizer::applyEffect(std::vector<std::vector<float>> data) {
    float scaleVal = 0;
    if (data.size() == 2) {
        for (int i = 0; i < data.size(); i++){
            scaleVal = std::abs(*std::max_element(data[i].begin(), data[i].end(), compare));
        }
    } else {
        scaleVal = std::abs(*std::max_element(data[0].begin(), data[0].end(), compare));
    }
    
    scaleVal = 1 / scaleVal;
    for (int i = 0; i < data.size(); i++){
        for (int y = 0; y < data[i].size(); y++){
            data[i].at(y) = scaleVal * data[i].at(y);
        }
    }
    return data;
}
