#include "WavHeader.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

//read all data from file into an array of size determined by the file size, maybe 2d array for stereo audio

//do whatever data type converting neccesary

//run functions on it to add reverb/echo, etc. and copy to new array

//write data in new array to new file

//normalization: get largest value in array, do the required peak sound - largest val, then add that result to all values in array

//reverser: just reverse the array

//echo: apply a delay effect with decreasing magnitude to each section of audio

//low pass filter: tune down all audio above a certain threshold to be below that threshhold, seems like reverse normalization



int main() {
    // int list [2];
    // list[0] = 1;
    // list[1] = 2;
    // int_holder number;
    // number = (int_holder){.num = 1, .num2 = 2};
    // std::cout << number.num << std::endl;

    std::ifstream file("untitled.wav", std::ios::binary | std::ios::in);
    // short* buffer = nullptr;

    // char* buffer2 = nullptr;
    // file.read(buffer2, 1);
    // std::cout << buffer2 << std::endl;

    std::vector<unsigned char> vect_buffer(std::istreambuf_iterator<char>(file), {});
    for (int x = 0; x < 40; x++) {
        std::cout << vect_buffer[x];
    }
    std::cout << std::endl;
    return 0;
}