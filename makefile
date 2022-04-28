out: main.o IWavModel.o Wav.o WavWriter.o ISignalProcessor.o Normalizer.o Reverser.o
	g++ -std=c++11 main.o IWavModel.o Wav.o WavWriter.o ISignalProcessor.o Normalizer.o Reverser.o -o out

main.o: main.cpp
	g++ -std=c++11 main.cpp

IWavModel.o: IWavModel.cpp IWavModel.h
	g++ -std=c++11 IWavModel.cpp

Wav.o: Wav.cpp Wav.h
	g++ -std=c++11 Wav.cpp

WavWriter.o: WavWriter.cpp WavWriter.h
	g++ -std=c++11 WavWriter.cpp

ISignalProcessor.o: ISignalProcessor.cpp ISignalProcessor.h
	g++ -std=c++11 ISignalProcessor.cpp

Normalizer.o: Normalizer.cpp Normalizer.h
	g++ -std=c++11 Normalizer.cpp

Reverser.o: Reverser.cpp Reverser.h
	g++ -std=c++11 Reverser.cpp

clean:
	rm *.o