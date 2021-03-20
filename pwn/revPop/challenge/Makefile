SHELL=/bin/bash

.PHONY = usage compile start clean

all: compile 


usage:
	@echo "Usage:"
	@echo "make compile -> Makes an executable from the glatt.c file"
	@echo "make start -> Compiles an executable and runs the glatt program"
	@echo "make clean -> Removes ./glatt file"

compile: 
	@echo "Compiling program without stack canaries..."
	@gcc -o glatt glatt.c -fno-stack-protector


start: compile
	@echo "Running glatt"
	./glatt


clean:
ifneq (, $(wildcard ./glatt))
	@rm ./glatt
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif