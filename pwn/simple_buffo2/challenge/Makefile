.SHELL = /bin/bash

.PHONY = usage compile clean

all = usage

usage:
	@echo "Usage:"
	@echo "make compile -> Compile file into 'simple2' executable"
	@echo "make clean -> Removes an unnecessary executables"


compile:
	@gcc simple2.c -o simple2 -fno-stack-protector


clean:
ifneq (,$(wildcard ./simple2))
	@rm ./simple2
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif