CC=gcc
CFLAGS=-c -Wall


all: run

run: main.o 
	$(CC) main.o -o run

main.o: main.c
	$(CC) $(CFLAGS) main.c

clean:
	rm -rf *.o main run