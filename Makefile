CC = cc
CFLAGS = -std=c99 -pedantic -Wall -Wextra

OBJ = sample.o sll.o

all: sample

sample: ${OBJ}
	${CC} -o $@ ${OBJ}

${OBJ}: sll.h

clean:
	rm -f sample *.o

.PHONY: all clean
