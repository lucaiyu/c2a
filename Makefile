.PHONY: default
default:
	make test
.PHONY: test
test:
	make build
	./c2a.exe test.c
.PHONY: build
build: compiler/Makefile
	make -C compiler
	gcc build/*.o -g -o c2a.exe

.PHONY: clean
clean:
	rm -fr build/*
	rm c2a.exe