
#makefile for qsolver program
#'make' to compile, 'make run' to run program
#'make utest' to compile unit tests, 'make runtest' to run all tests
#'make clean' to clean object files and executables

#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic -lm
RUN = ./main
RUNTEST = ./utest

main: main.o
	$(CC) $(CFLAGS) -o main main.o input.o validate.o mysqrt.o disc.o qsolve.o output.o -lm

main.o: main.c main.h input.c validate.c mysqrt.c disc.c qsolve.c output.c
	$(CC) $(CFLAGS) -c main.c input.c validate.c mysqrt.c disc.c qsolve.c output.c

utest: utest.o
	$(CC) $(CFLAGS) -o utest utest.o validate.o disc.o mysqrt.o qsolve.o -lm

utest.o: utest.c main.h
	$(CC) $(CFLAGS) -c utest.c validate.c disc.c mysqrt.c qsolve.c

runtest:
	$(RUNTEST)

run:
	$(RUN)

clean:
	rm -f *.o *.out main utest
