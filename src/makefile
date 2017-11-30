#makefile for qsolver program

#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic
RUN = ./main

main: main.o
	$(CC) $(CFLAGS) -o main main.o input.o

main.o: main.c main.h input.c
	$(CC) $(CFLAGS) -c main.c input.c

run:
	${RUN}

clean:
	rm -f *.o *.out main
