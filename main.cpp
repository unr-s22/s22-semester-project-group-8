#include "Controller.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string file = "Test_Audio_Files/Test_16bit_PCM_mono.wav";

    Controller Control;
    Control.readFile(file);
    Control.reverse();
    Control.writeFile("out.wav");
    // g++ main.cpp IWavModel.cpp IWavModel.h Wav.cpp Wav.h WavWriter.cpp WavWriter.h WavHeader.h ISignalProcessor.cpp ISignalProcessor.h Reverser.cpp Reverser.h Normalizer.cpp Normalizer.h Controller.cpp Controller.h -o out
    return 0;
}