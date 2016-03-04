#Makefile for EulerMathLibrary

TARGET = EulerMathLibrary.a

CC=g++
CDEBUG_FLAGS=-std=c++1y -Wall -Wpedantic -Wextra
CRELEASE_FLAGS=-std=c++1y 

EulerMathLibrary.a: EulerMathLibrary.o
	ar rcs $@ $^

EulerMathLibrary.o: EulerMathLibrary.cpp EulerMathLibrary.h
	$(CC) $(CDEBUG_FLAGS) -c -o EulerMathLibrary.o EulerMathLibrary.cpp

clean:
	rm *.a *.o
