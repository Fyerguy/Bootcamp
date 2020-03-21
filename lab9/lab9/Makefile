lab9: lab9.o lab9b.o
	gcc lab9.o lab9b.o -o lab9

mylab9:lab9.o lab9asm.o
	gcc lab9.o lab9asm.o -o lab9

lab9.o: lab9.c
	gcc -c -g -Wall lab9.c

lab9asm.o: lab9asm.s   #you have to write this .s file
	gcc -c -g -Wall lab9asm.s

lab9b.o: lab9b.c
	gcc -c -g -Wall lab9b.c
