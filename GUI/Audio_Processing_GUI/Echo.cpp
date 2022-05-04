#include "Echo.h"
#include <iostream>
#include <math.h>
#include <vector>

std::vector<std::vector<float>> Echo::applyEffect(const std::vector<std::vector<float>> input) {
    float gain = 0.5;
    int delay = 50000;
    std::vector<std::vector<float>> output = {{}};
    if (input.size() == 2) {
        output.push_back({});
    }
   
    auto decay = log(0.001)/log(gain);
    for (int i = 0; i < input.size(); i++) {
        int new_size = int(input[i].size() + delay * decay);
        std::vector<float> extendedInput(new_size, 0.0f);
        extendedInput.insert(extendedInput.begin(), input[i].begin(), input[i].end());
        output[i].reserve(extendedInput.size());
        for(int x = 0; x < new_size; x++) {
            if (x > delay) {
                output[i].push_back(extendedInput[x] + gain * output[i].at(x - delay));
            } else {
                output[i].push_back(extendedInput[x]);
            }
        }
    }
    return output;
}
