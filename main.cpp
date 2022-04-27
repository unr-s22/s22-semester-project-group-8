#include "Wav.h"
#include "WavWriter.h"
#include "Reverser.h"
#include "Normalizer.h"
#include "IWavModel.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string file = "Test_Audio_Files/Test_16bit_PCM_mono_normalized.wav";

    IWavModel WaveModel;
    WaveModel.readFile(file);
    WaveModel.writeFile("out.wav");
    // Reverser rev;
    // Normalizer norm;
    // wave.setData(rev.reverseData(wave.getData()));
    // wave.setData(norm.normalizeData(wave.getData()));
    
    return 0;
}