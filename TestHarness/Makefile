#Makefile for Euler test harness
TARGET = euler

CC=g++
CDEBUG_FLAGS=-std=c++1y -Wall -Wpedantic -Wextra
CRELEASE_FLAGS=-std=c++1y

euler: unittest1.cpp
	$(CC) $(CDEBUG_FLAGS) -c -o $(TARGET) unittest1.cpp

clean:
	rm *.a *.o
