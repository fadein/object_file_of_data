.PHONY: all
.ONESHELL:

# gcc
CFLAGS = -std=c11 -ggdb3
CFLAGS = -std=c11

all: main
	@cat <<MSG
	
	Now modify data.c then re-run make to demonstrate
	this program\'s ability to relink to a new data object
	without needing to re-build each code file
	MSG

main: mystruct.o main.o data.o

mystruct.o main.o data.o: mystruct.h

clean:
	-rm -f *.o main main.exe
