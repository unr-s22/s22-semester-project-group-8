#include "Wav.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

Wav::Wav(std::string file) {
    fileName = file;
}

void Wav::readFile() {
    std::ifstream file(fileName, std::ios::binary | std::ios::in);
    
    char* buffer = nullptr;

    if(file.is_open()){
        file.read((char*)&header, 20); //reading up to subchunk1 size
        file.read((char*)&header + 20, header.subchunk1_size); //reading the size of subchunk 1
        file.read((char*)&header + 20 + header.subchunk1_size, 8); //reading subchunk 2


        buffer = new char[header.data_bytes]; //to hold data
        file.read((char*)buffer, header.data_bytes); 
        
        std::cout << header.bits_per_sample << std::endl;

        if(header.num_channels == 1){
            std::cout << "here" << std::endl;
            for(int i = 0; i < header.data_bytes; i++){
                data[0].push_back((float)buffer[i] / pow(2, header.bits_per_sample - 1)); //add data to vector, second arg in power is max value of the bitrate, makes floats nice
            }
        } else {
            data.push_back({}); //adds second dimension to data vector

            for(int i = 0; i < header.data_bytes; i++){
                if (i % 2 == 0) {
                    data[0].push_back((float)buffer[i] / pow(2, header.bits_per_sample - 1)); // left ear
                } else {
                    data[1].push_back((float)buffer[i] / pow(2, header.bits_per_sample - 1)); // right ear
                }
                
                
            }
        }
        file.close();
    }
    
    // ptr = ptr + 1;
    // std::cout << (char*)ptr << std::endl;
    // ptr = &header.audio_format;
    // std::cout << (char*)ptr << std::endl;

    // for(int i = 0; i < sizeof(header); i++) {
    //     ptr = ptr + 1;
    //     std::cout << (char*)ptr << std::endl;
    // }
    delete[] buffer;
}

void Wav::makeFile() {
    std::ofstream fileOut("out.wav");
    fileOut.write((char*)&header, sizeof(header));
    if (header.num_channels == 1) {
        for(int i = 0; i < data[0].size(); i++) {
            char num = data[0].at(i) * pow(2, header.bits_per_sample - 1);
            fileOut.write((char*)&num, 1);
        }
    } else {
        for(int i = 0; i < data[0].size(); i++) {
            char num = data[0].at(i) * pow(2, header.bits_per_sample - 1);
            fileOut.write((char*)&num, 1);
            num = data[1].at(i) * pow(2, header.bits_per_sample - 1);
            fileOut.write((char*)&num, 1);
        }
    }
}