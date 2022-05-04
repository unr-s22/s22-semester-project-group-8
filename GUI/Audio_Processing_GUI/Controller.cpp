#include "Controller.h"
#include "WavModel.h"
#include "ISignalProcessor.h"
#include "Reverser.h"
#include "Normalizer.h"
#include "Echo.h"
#include "LowPass.h"

void Controller::readFile(std::string newFile) {
    model.readFile(newFile);
}

void Controller::writeFile(std::string outFile) {
    model.writeFile(outFile);
}

std::string Controller::getAttributes() {
    return model.getAttributes();
}

void Controller::effect(std::string name) {
    if (name == "reverse") {
        ISignalProcessor *processor = new Reverser();
        model.setData(processor->applyEffect(model.getData()));
    } else if (name == "normalize") {
        ISignalProcessor *processor = new Normalizer();
        model.setData(processor->applyEffect(model.getData()));
    } else if (name == "echo") {
        ISignalProcessor *processor = new Echo();
        model.setData(processor->applyEffect(model.getData()));
    } else if (name == "lowpass") {
        ISignalProcessor *processor = new LowPass();
        model.setData(processor->applyEffect(model.getData()));
    }
}
