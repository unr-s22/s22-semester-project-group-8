#include "WavWriter.h"
#include "Wav.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

void WavWriter::writeToFile(Wav wave, std::string fileName) {
    std::vector<std::vector<float>> data = wave.getData();
    wav_header header = wave.getHeader();
    
    std::ofstream fileOut(fileName, std::ios::binary | std::ios::out);
    fileOut.write((char*)&header, sizeof(header));

    int maxSize = pow(2, header.bits_per_sample  - 1);

    if (header.num_channels == 1) {
        for(int i = 0; i < data[0].size(); i++) {
            short num = data[0].at(i) * maxSize;
            fileOut.write((char*)&num, 2);
        }
    } else { 
        for(int i = 0; i < data[1].size(); i++){
            short num = data[0].at(i) * maxSize;
            fileOut.write((char*)&num, 2);
            num = data[1].at(i) * maxSize;
            fileOut.write((char*)&num, 2);
        }
    }
    fileOut.close();
}