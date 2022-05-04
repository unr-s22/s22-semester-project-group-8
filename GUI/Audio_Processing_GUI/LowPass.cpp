#include "LowPass.h"
#include <iostream>
#include <math.h>
#include <vector>

std::vector<std::vector<float>> LowPass::applyEffect(const std::vector<std::vector<float>> input) {
    float max_val = .5;
    float gain = 0.8;

    std::vector<std::vector<float>> output = {{}};
    if (input.size() == 2) {
        output.push_back({});
    }

    for (int i = 0; i < input.size(); i++) {
        for (int x = 0; x < input[i].size(); x++){
            if (abs(input[i].at(x)) > max_val) {
                output[i].push_back(input[i].at(x) * gain); // if audio is above .5, becomes 20% less
            } else {
                output[i].push_back(input[i].at(x));
            }
        }
    }
    return output;
}
