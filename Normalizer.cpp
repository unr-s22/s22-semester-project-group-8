#include "Normalizer.h"
#include <algorithm>
#include <vector>
#include <cmath>


bool compare(float a, float b) {
        return std::abs(a) < std::abs(b);
}

std::vector<std::vector<float>> Normalizer::normalizeData(std::vector<std::vector<float>> data) {
    float scaleVal = 0;
    std::cout << data[0].at(0) << std::endl;
    for (int i = 0; i < data.size(); i++){
        scaleVal = abs(*std::max_element(data[i].begin(), data[i].end(), compare));
    }
    std::cout << scaleVal << std::endl;
    scaleVal = 1 / scaleVal;
    for (int i = 0; i < data.size(); i++){
        for (int y = 0; y < data[i].size(); y++){
            data[i].at(y) = scaleVal * data[i].at(y);
        }
    }
    return data;
}