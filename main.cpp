#include "WavHeader.h"
#include "Wav.h"
#include <iostream>
#include <fstream>

int main() {
    std::string str = "8bitpcm2.wav";
    Wav wave(str);
    wave.readFile();
    wave.makeFile();
    return 0;
}