#include "Wav.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

Wav::Wav(std::string file) {
    fileName = file;
}

void Wav::setData(std::vector<std::vector<float>> newData) {
    data = newData;
}

std::vector<std::vector<float>> Wav::getData() {
    return data;
}

wav_header Wav::getHeader() {
    return header;
}

void Wav::readFile() {
    std::ifstream file(fileName, std::ios::binary | std::ios::in);
    char* buffer = nullptr; //char because char = 1 byte, 1 chunk of data is 2 hex digits which is also 1 byte

    if(file.is_open()){
        file.read((char*)&header, 20); //reading up to subchunk1 size
        file.read((char*)&header + 20, header.subchunk1_size); //reading the size of subchunk 1
        file.read((char*)&header + 20 + header.subchunk1_size, 8); //reading subchunk 2

        buffer = new char[header.data_bytes]; //to hold data
        file.read((char*)buffer, header.data_bytes); //reads data in

        int powerNum = pow(2, header.bits_per_sample - 1);

        if(header.num_channels == 1){
            for(int i = 0; i < header.data_bytes; i++){
                data[0].push_back((float)buffer[i] / powerNum); //add data to vector, second arg in power is max value of the bitrate, makes floats nice
            }
        // std::cout << data[0].at(1264) << std::endl;
        } else {
            data.push_back({}); //adds second dimension to data vector
            for(int i = 0; i < header.data_bytes; i += 2){
                if ((i / 2) % 2 == 0) {
                    data[0].push_back((float)buffer[i] / powerNum); // left ear byte 1
                    data[0].push_back((float)buffer[i + 1] / powerNum); // left ear byte 2
                } else {
                    data[1].push_back((float)buffer[i] / powerNum); // right ear byte 1
                    data[1].push_back((float)buffer[i + 1] / powerNum); // right ear byte 2
                }
            }
        }
        file.close();
    }
    delete[] buffer;
}