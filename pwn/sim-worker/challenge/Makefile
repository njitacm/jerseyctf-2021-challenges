.SHELL = /bin/bash

.PHONY = usage compile exploit clean

all = usage


usage:
	@echo "Usage:"

compile:
	@echo ""

exploit:
	# Automatically writes into buffer
	@python3 -c 'print()' | ./simpear

clean:
ifneq $(,$(wildcard ./simpear))
	@rm ./simpear 
endif
ifneq (, $(wildcard ./a.out))
	@rm ./a.out
endif