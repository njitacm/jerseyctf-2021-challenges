.SHELL = /bin/bash

.PHONY = usage compile clean

all = usage

usage:
	@echo "Usage:"
	@echo "make compile -> Compile file into 'int' executable"
	@echo "make clean -> Removes an unnecessary executables"


compile:
	@gcc int.c -o int -fno-stack-protector

clean:
ifneq (,$(wildcard ./int))
	@rm ./int
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif