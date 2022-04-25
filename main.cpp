#include "Wav.h"
#include "WavWriter.h"
#include "Reverser.h"
#include "Normalizer.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string str = "Test_Audio_Files/Test_16bit_PCM_mono_normalized.wav";
    Wav wave(str);
    WavWriter wavW;
    wave.readFile();
    Reverser rev;
    Normalizer norm;
    // wave.setData(rev.reverseData(wave.getData()));
    // wave.setData(norm.normalizeData(wave.getData()));
    wavW.writeToFile(wave, "out.wav");



    // std::vector<std::vector<int>> data = {};
    // std::vector<std::vector<float>> data = {{0, 0.2, 0.4, 0, -0.3}};
    
    // float scaleVal = 0;
    // for (int i = 0; i < data.size(); i++){
    //     for (int y = 0; y < data[i].size(); y++){
    //         if (std::abs(data[i].at(y)) > scaleVal) {
    //             scaleVal = std::abs(data[i].at(y));
    //         }
    //     }
    // }
    // scaleVal = 1 / scaleVal;
    // for (int i = 0; i < data.size(); i++){
    //     for (int y = 0; y < data[i].size(); y++){
    //         data[i].at(y) = scaleVal * data[i].at(y);
    //     }
    // }
    // for (int y = 0; y < data[0].size(); y++){
    //     std::cout << data[0].at(y) << std::endl;
    // }

    
    return 0;
}