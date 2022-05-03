#include "Controller.h"
#include "Reverser.h"
#include "Wav.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string file = "Test_Audio_Files/Test_16bit_PCM_mono.wav";

    // hardcode echo parameter
    Controller Control;
    Control.readFile(file);
    std::cout << Control.getAttributes() << std::endl;
    
    Control.effect("reverse");
    Control.writeFile("out.wav");

    // g++ main.cpp WavModel.cpp WavModel.h Wav.cpp Wav.h WavWriter.cpp WavWriter.h WavHeader.h Reverser.cpp Reverser.h Normalizer.cpp Normalizer.h Controller.cpp Controller.h -o out
    return 0;
}