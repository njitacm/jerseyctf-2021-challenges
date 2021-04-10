SHELL=/bin/bash

.PHONY = clean init insert usage start build run

all: usage


usage:
	@echo "Usage:"
	@echo "make init -> Create a DB file, and a table within the file"
	@echo "make insert -> Insert values into the table of the DB file"
	@echo "make start -> Creates a DB file with a table and inserts values"
	@echo "make build -> Just builds the golang executable"
	@echo "make run -> Runs golang executable (and builds if not built" 
	@echo "make clean -> Removes db file, pycache, and golang executable"

build:
	@go build form.go

run: build
	@./form

init:
	@python3 dbInit.py


insert: init
	@python3 dbInsert.py


start: insert
	@echo "Database and Table were created. Values were inserted into table."


clean:
ifneq (, $(wildcard ./vuln.db))
	@rm vuln.db
endif
ifneq (, $(wildcard ./__pycache__))
	@rm -rf __pycache__
endif
ifneq (, $(wildcard ./form))
	@rm form
endif