CC = cc
CFLAGS = -std=c99 -pedantic -Wall -Wextra

all: sample

sample: sample.o sll.o
	${CC} -o $@ sample.o sll.o

sample.o: sample.c
list.o: list.c list.h

clean:
	rm -f sample *.o

.PHONY: all clean
