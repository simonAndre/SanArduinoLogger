CC=g++
CXXFLAGS=-g -W -Wall
ROOT=../../
LIBDIR=$(ROOT)src
LIBSOURCES_ARDUINO=$(LIBDIR)/external/arduino-logger/src/*.cpp $(LIBDIR)/external/arduino-printf/src/*.cpp
LIBSOURCES_ARDUIMOCK=$(LIBDIR)/external/arduino-logger/src/*.cpp $(LIBDIR)/external/arduino-printf/src/printf.c
IFLAGS_ARDUINO= -I$(ROOT) -I$(LIBDIR)/external/arduino-printf/src
IFLAGS_ARDUIMOCK= -I$(ROOT) -I$(LIBDIR)/arduinoMock
# IFLAGS= -I$(LIBDIR) -I$(LIBDIR)/external/arduino-printf/src -I.


test:  test.cpp
	$(CC) ./test.cpp $(LIBSOURCES_ARDUIMOCK) -o test $(IFLAGS_ARDUIMOCK) $(CXXFLAGS)

test-printf:  printf/test-printf.cpp
	$(CC) ./printf/test-printf.cpp -o test-printf $(IFLAGS_ARDUIMOCK) $(CXXFLAGS)

clean:
	rm ./*.exe