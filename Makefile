.PHONY: all

# gcc
CFLAGS = -std=c11 -ggdb3
CFLAGS = -std=c11

main: mystruct.o main.o data.o

mystruct.o main.o data.o: mystruct.h

clean:
	-rm -f *.o main main.exe
