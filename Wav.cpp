#include "Wav.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

void Wav::setData(std::vector<std::vector<float>> newData) {
    data = newData;
}

std::vector<std::vector<float>> Wav::getData() {
    return data;
}

wav_header Wav::getHeader() {
    return header;
}

std::string Wav::getName() {
    return fileName;
}

void Wav::readFile(std::string filePath) {
    fileName = filePath;
    std::ifstream file(filePath, std::ios::binary | std::ios::in);
    short* buffer = nullptr;

    if(file.is_open()){
        file.read((char*)&header, 20); //reading up to subchunk1 size
        file.read((char*)&header + 20, header.subchunk1_size); //reading the size of subchunk 1
        file.read((char*)&header + 20 + header.subchunk1_size, 8); //reading subchunk 2

        buffer = new short[header.data_bytes]; //to hold data
        file.read((char*)buffer, header.data_bytes); //reads data in

        int maxSize = pow(2, header.bits_per_sample - 1);
        int upperBound = header.data_bytes / header.block_align * header.num_channels;

        if(header.num_channels == 1){
            for(int i = 0; i < upperBound; i++){
                data[0].push_back((float)buffer[i] / maxSize); //add data to vector, second arg in power is max value of the bitrate, makes floats nice
            }
        
        } else {
            data.push_back({}); //adds second dimension to data vector
            for(int i = 0; i < upperBound; i++){
                if (i % 2 == 0) {
                    data[0].push_back((float)buffer[i] / maxSize); // left ear bit 1
                } else {
                    data[1].push_back((float)buffer[i] / maxSize); // right ear bit 1
                }
            }
        }
        file.close();
    }
    delete[] buffer;
}