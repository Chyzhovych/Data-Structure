CC=gcc
CFLAGS=-c -Wall


all: stack

stack: stack.o  dstruct.o
	$(CC) dstruct.o stack.o -o stack

stack.o:  stack.c
	$(CC) $(CFLAGS) stack.c

dstruct.o: dstruct.c dstruct.h
	$(CC) $(CFLAGS) dstruct.c 

clean:
	rm -rf *.o dstruct stack
