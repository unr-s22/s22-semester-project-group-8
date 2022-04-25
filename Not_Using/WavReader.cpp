#include "WavReader.h"
#include "Wav.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

WavReader::WavReader(std::string file) {
    fileName = file;
}

void WavReader::readFile(Wav wave) {
    std::ifstream file(fileName, std::ios::binary | std::ios::in);
    char* buffer = nullptr; //char because char = 1 byte, 1 chunk of data is 2 hex digits which is also 1 byte

    if(file.is_open()){
        file.read((char*)&header, 20); //reading up to subchunk1 size
        file.read((char*)&header + 20, header.subchunk1_size); //reading the size of subchunk 1
        file.read((char*)&header + 20 + header.subchunk1_size, 8); //reading subchunk 2


        buffer = new char[header.data_bytes]; //to hold data
        file.read((char*)buffer, header.data_bytes); //reads data in
        
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
    delete[] buffer;
}