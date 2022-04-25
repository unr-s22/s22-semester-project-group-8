#include "Wav.h"
#include "WavWriter.h"
#include "Reverser.h"
#include "Normalizer.h"
#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::string str = "Test_Audio_Files/Test_16bit_PCM_mono_normalized.wav"; // dont use stereo audio, code is built for char buffer
    Wav wave(str);
    WavWriter wavW;
    wave.readFile();
    // Reverser rev;
    // Normalizer norm;
    // wave.setData(rev.reverseData(wave.getData()));
    // wave.setData(norm.normalizeData(wave.getData()));
    wavW.writeToFile(wave, "out.wav");

    // if you compare the output file and the input file, it skips every other value
    
    return 0;
}