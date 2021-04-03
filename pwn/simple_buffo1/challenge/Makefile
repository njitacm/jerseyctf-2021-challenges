.SHELL = /bin/bash

.PHONY = usage compile clean

all = usage

usage:
	@echo "Usage:"
	@echo "make compile -> Compile file into 'simple1' executable"
	@echo "make clean -> Removes an unnecessary executables"


compile:
	@gcc simple1.c -o simple1 -fno-stack-protector -g


clean:
ifneq (,$(wildcard ./simple1))
	@rm ./simple1 
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif