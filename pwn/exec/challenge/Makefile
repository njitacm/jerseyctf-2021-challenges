.SHELL = /bin/bash

.PHONY = usage compile clean

all = usage

usage:
	@echo "Usage:"
	@echo "make compile -> Compile file into 'exec' executable"
	@echo "make clean -> Removes an unnecessary executables"


compile:
	@gcc exec.c -o exec -fno-stack-protector

clean:
ifneq (,$(wildcard ./exec))
	@rm ./exec 
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif