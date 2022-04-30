#ifndef CODE_CONTROLLER_H
#define CODE_CONTROLLER_H

#include "IWavModel.h"
#include "ISignalProcessor.h"
#include <iostream>

class Controller {
    IWavModel WavModel;
    ISignalProcessor SignalProcessor;
public:
    void reverse();
    void normalize();
    void readFile(std::string newFile);
    void writeFile(std::string outFile);
    
};

#endif