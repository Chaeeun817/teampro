CC = gcc
.PHONY: clean

main: main.o
        $(CC) -g -o main main.o -L../lib -lmysys -lselect -ldivfile -lsenti

main.o: main.c
        $(CC) -g -c main.c -I../include

clean:
        rm main.o main

