.SHELL = /bin/bash

.PHONY = usage compile exploit clean

all = usage


usage:
	@echo "Usage:"
	@echo "make compile -> Compile file into 'simpear' executable"
	@echo "make clean -> Removes an unnecessary executables"

compile:
	@echo "Compiling simpear.c to simpear"
	@gcc simpear.c -o simpear

exploit:
	echo "Ya Yeet"
	# Automatically writes into buffer
	# @python3 -c 'print()' | ./simpear

clean:
ifneq (,$(wildcard ./simpear))
	@rm ./simpear 
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif