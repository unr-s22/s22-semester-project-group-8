#include "WavHeader.h"
#include "Wav.h"
#include <iostream>


int main() {
    std::string str = "untitled.wav";
    Wav wave(str);
    wave.readFile();
    return 0;
}