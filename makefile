
CC ?= c99
CFLAGS ?= -Os -w
SRC := $(shell printf "%s " ./src/*)
OBJ := $(SRC:./src/%.c=./bin/%) 

default: all
all: bin
clean: 
	rm -rf bin

bin: ${OBJ}

bin/%: src/%.c
	mkdir -p bin
	${CC} -o $@ $^ ${CFLAGS}

.PHONY: all clean
