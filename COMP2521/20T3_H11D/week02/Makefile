# COMP2521 ... Tut 02 Makefile

CC = gcc
CFLAGS = -Wall -Werror -g

.PHONY: all
all: testList

testList: testList.o List.o
testList.o: testList.c List.h

List.o: List.c List.h

.PHONY: clean
clean:
	rm -f testList *.o

