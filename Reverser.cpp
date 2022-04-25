#include "Reverser.h"
#include <algorithm>
#include <vector>

std::vector<std::vector<float>> Reverser::reverseData(std::vector<std::vector<float>> data) {
    
    for (int i = 0; i < data.size(); i++){
        std::reverse(data[i].begin(), data[i].end());
    }
    if (data.size() == 2){
        std::vector<float> tempData = data[0];
        data[0] = data[1];
        data[1] = tempData;
    }
    
    return data;
}
