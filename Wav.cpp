#include "Wav.h"
#include <iostream>
#include <fstream>

Wav::Wav(std::string file) {
    fileName = file;
}

void Wav::readFile(){
    std::ifstream file(fileName, std::ios::binary | std::ios::in);

    char charBuffer[4];
    int intBuffer;
    short shortBuffer;

    file.read(charBuffer, 4);
    std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.chunk_ID));
    
    file.read ((char*)&intBuffer, 4);
    header.chunk_size = intBuffer;

    file.read(charBuffer, 4);
    std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.format));

    file.read ((char*)&intBuffer, 4);
    header.subchunk1_size = intBuffer;

    file.read ((char*)&shortBuffer, 4);
    header.audio_format = shortBuffer;

    file.read ((char*)&shortBuffer, 4);
    header.num_channels = shortBuffer;

    file.read ((char*)&intBuffer, 4);
    header.sample_rate = intBuffer;

    file.read ((char*)&intBuffer, 4);
    header.byte_rate = intBuffer;

    file.read ((char*)&shortBuffer, 4);
    header.block_align = shortBuffer;

    file.read ((char*)&shortBuffer, 4);
    header.bits_per_sample = shortBuffer;

    file.read(charBuffer, 4);
    std::copy(std::begin(charBuffer), std::end(charBuffer), std::begin(header.data_header));

    file.read ((char*)&intBuffer, 4);
    header.data_bytes = intBuffer;

    std::cout << header.chunk_ID << std::endl << header.chunk_size << std::endl << header.format << std::endl << header.audio_format << std::endl << header.byte_rate << std::endl;
}