#include "WavHeader.h"
#include "Wav.h"
#include <iostream>
#include <fstream>


int main() {
    std::string str = "test_mono.wav";
    Wav wave(str);


    std::ifstream file("file.txt");
    char chars[4];
    file.read(chars, 4);
    std::cout << chars << std::endl;
    wave.readFile();
    return 0;
}