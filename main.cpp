#include "WavHeader.h"
#include "Wav.h"
#include <iostream>
#include <fstream>

//2 hex digits = 1 byte

int main() {
    std::string str = "Test_16bit_PCM_mono.wav";
    std::string str2 = "Test_32bit_float_mono.wav";
    Wav wave(str);
    // Wav wave2(str2);
    wave.readFile();
    wave.makeFile();
    // wave2.readFile();

    short num = 1;
    num = (float)num / 10;
    // std::vector<std::vector<int>> ints = {{}};
    // for(int i = 0; i < 50; i++) {
    //     ints[0].push_back(i);
    // }
    // std::cout << sizeof(ints[0]) << std::endl;
    return 0;
}