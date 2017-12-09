CC = gcc
.PHONY: clean

libdivfile.a: divfile.o
        ar rv libdivfile.a divfile.o

libselect.a: selectTalk.o selyear.o
        ar rv libselect.a selectTalk.o selyear.o

libtfl.a: talkfilelist.o
        ar rv libtfl.a talkfilelist.o

%.o: %.c
        $(CC) -g -I../include -c $< -o $@

clean:
        rm *.o

