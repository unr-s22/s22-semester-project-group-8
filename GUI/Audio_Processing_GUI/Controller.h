#ifndef CODE_CONTROLLER_H
#define CODE_CONTROLLER_H

#include "WavModel.h"
#include "ISignalProcessor.h"
#include <iostream>

class Controller {
    WavModel model;
public:
    void effect(std::string name);

    void readFile(std::string newFile);
    void writeFile(std::string outFile);
    std::string getAttributes();
};

#endif
