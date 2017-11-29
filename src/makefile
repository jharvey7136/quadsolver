#makefile for qsolver program

#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic
RUN = ./main

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: main.c main.h
	$(CC) $(CFLAGS) -c main.c

run:
	${RUN}

clean:
	rm -f *.o *.out main
