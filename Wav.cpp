#include "Wav.h"
#include <iostream>
#include <fstream>

Wav::Wav(std::string file) {
    fileName = file;
}

void Wav::readFile() {
    std::ifstream file(fileName, std::ios::binary | std::ios::in);

    // char* charBuffer[4];
    // int intBuffer;
    // short shortBuffer;
    
    short* buffer = nullptr;

    file.read((char*)&header, sizeof(wav_header));
    buffer = new short[header.data_bytes];
    file.read((char*) buffer, header.data_bytes);
    for(int i = 0; i < header.data_bytes / header.block_align; i++){
        data.push_back(buffer[i]);
        //professors implementation: data.push_back((float)buffer[i] / MAX_16BIT);
    }
    file.close();
    delete[] buffer;
    //2 hex nums = 1 int, doesnt display negative for some reason
    std::cout << data[16] << std::endl;
    


    // std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.chunk_ID));
    
    // file.read((char*)&header.chunk_size, 4);
    // header.chunk_size = intBuffer;

    // file.read(header.format, 4); 
    // std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.format));

    // file.read(header.subchunk1_ID, 4);
    // std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.subchunk1_ID));

    // file.read((char*)&intBuffer, 4);
    // header.subchunk1_size = intBuffer;

    // file.read((char*)&shortBuffer, 2);
    // header.audio_format = shortBuffer;

    // file.read((char*)&shortBuffer, 2);
    // header.num_channels = shortBuffer;

    // file.read((char*)&intBuffer, 4);
    // header.sample_rate = intBuffer;

    // file.read((char*)&intBuffer, 4);
    // header.byte_rate = intBuffer;

    // file.read((char*)&shortBuffer, 2);
    // header.block_align = shortBuffer;

    // file.read((char*)&intBuffer, 2);
    // header.bits_per_sample = shortBuffer;

    // file.read(header.data_header, 4);
    // std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.data_header));

    // file.read((char*)&intBuffer, 4);
    // header.data_bytes = intBuffer;

    
}