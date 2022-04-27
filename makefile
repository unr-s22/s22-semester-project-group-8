out: main.o IWavModel.o Wav.o WavWriter.o Normalizer.o Reverser.o
	g++ -std=c++11 -o main.o IWavModel.o Wav.o WavWriter.o Normalizer.o Reverser.o

main.o: main.cpp
	g++ -std=c++11 main.cpp

IWavModel.o: IWavModel.cpp
	g++ -std=c++11 IWavModel.cpp

Wav.o: Wav.cpp
	g++ -std=c++11 Wav.cpp

WavWriter.o: WavWriter.cpp
	g++ -std=c++11 WavWriter.cpp

Normalizer.o: Normalizer.cpp
	g++ -std=c++11 Normalizer.cpp

Reverser.o: Reverser.cpp
	g++ -std=c++11 Reverser.cpp

clean:
	rm *.o