out: main.o Wav.o WavHeader.o
	g++ -std=c++11 main.o Dog.o Tail.o -o lab4

main.o: main.cpp
	gcc -std=c++11 main.cpp

Wav.o: Wav.cpp Wav.h
	gcc -std=c++11 Wav.cpp

WavHeader.o: WavHeader.h
	gcc -std=c++11 WavHeader.h

clean:
	rm *.o