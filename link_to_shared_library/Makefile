CC=g++

INCLUDE=-I../work_with_shared_library
CFLAGS=-std=c++14 -c -Wall
LIB_PATH=../work_with_shared_library
RPATH=-rpath=$(LIB_PATH)
LD_PATH=-L$(LIB_PATH) -Wl,$(RPATH)
all: main

main: main.o
		 $(CC) $(LD_PATH) main.o -llog -o main

main.o:
			$(CC) $(CFLAGS) $(INCLUDE) main.cpp
clean:
			rm -f *.o main