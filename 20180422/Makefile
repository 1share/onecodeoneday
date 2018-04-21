# Tools
CC=g++
LD=g++

# Default arguments
CFLAGS=-O0 -g -c -fno-strict-aliasing -fPIC -Wall
LDFLAGS=-Wall -levent
INCLUDE=-I

# Description blocks
all: test_mybuffer

test_mybuffer: test_mybuffer.o mybuffer.o
	$(LD) $(LDFLAGS) -o $@ $^ 

.cpp.o:
	$(CC) $(CFLAGS) $^
.cc.o:
	$(CC) $(CFLAGS) $^

clean:
	-rm -f test_mybuffer *.o

