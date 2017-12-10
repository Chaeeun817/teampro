CC = gcc
.PHONY: clean

libsenti.a: wordcnt.o total.o
	ar rv libsenti.a wordcnt.o total.o

libdivfile.a: divfile.o
        ar rv libdivfile.a divfile.o

libselect.a: selectTalk.o selyear.o
        ar rv libselect.a selectTalk.o selyear.o

libmysys.a: mysystem.o
	ar rv libmysys.a mysystem.o

%.o: %.c
        $(CC) -g -I../include -c $< -o $@

clean:
        rm *.o

