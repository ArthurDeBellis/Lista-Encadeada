all: main.c sources/lista.c
	gcc main.c -g sources/lista.c

clear: a.out
	rm a.out

run: a.out
	./a.out