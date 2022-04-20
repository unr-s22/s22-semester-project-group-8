#include "WavHeader.h"
#include "Wav.h"
#include <iostream>
#include <fstream>

int main() {
    std::string str = "Test_Audio_Files/Test_16bit_PCM_mono.wav";
    // std::string str1 = "Test_Audio_Files//Test_16bit_PCM_mono.wav";
    Wav wave(str);
    wave.readFile();
    wave.makeFile("out.wav");
    return 0;
}