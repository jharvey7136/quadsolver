#makefile for qsolver program

#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic -lm
RUN = ./main

main: main.o
	$(CC) $(CFLAGS) -o main main.o input.o validate.o mysqrt.o disc.o qsolve.o -lm

main.o: main.c main.h input.c validate.c mysqrt.c disc.c qsolve.c
	$(CC) $(CFLAGS) -c main.c input.c validate.c mysqrt.c disc.c qsolve.c

run:
	${RUN}

clean:
	rm -f *.o *.out main
