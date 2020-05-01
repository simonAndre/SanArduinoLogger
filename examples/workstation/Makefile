CC=g++
CXXFLAGS=-g -W -Wall
ROOT=../../
LIBDIR=$(ROOT)src
LIBSOURCES=$(LIBDIR)/external/arduino-logger/src/*.cpp
IFLAGS= -I$(LIBDIR) -I.
# -I$(LIBDIR)/external/arduino-logger/src



test:  test.cpp
	$(CC) ./*.cpp $(LIBSOURCES) -o test $(IFLAGS) $(CXXFLAGS)