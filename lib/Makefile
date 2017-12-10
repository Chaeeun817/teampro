CC = gcc
.PHONY: clean

libfuncs.a: mysystem.o selectTalk.o selyear.o divfile.o wordcnt.o total.o
	ar rv libfuncs.a mysystem.o selectTalk.o selyear.o divfile.o wordcnt.o total.o

%.o: %.c
	$(CC) -g -I../include -c $< -o $@

clean:
	rm *.o

