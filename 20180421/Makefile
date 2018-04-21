# Tools
CC=g++
LD=g++

# Default arguments
CFLAGS=-O0 -g -c -fno-strict-aliasing -fPIC -Wall
LDFLAGS=-Wall
INCLUDE=-I

# Description blocks
all: test_myutils

test_myutils: test_myutils.o myutils.o
	$(LD) $(LDFLAGS) -o $@ $^ 

.cpp.o:
	$(CC) $(CFLAGS) $^
.cc.o:
	$(CC) $(CFLAGS) $^

clean:
	-rm -f test_myutils *.o

