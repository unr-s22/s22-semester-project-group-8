#include "IWavModel.h"
#include "ISignalProcessor.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string file = "Test_Audio_Files/Test_16bit_PCM_mono_normalized.wav";

    IWavModel WaveModel;
    WaveModel.readFile(file);
    WaveModel.writeFile("out.wav");
    
    return 0;
}