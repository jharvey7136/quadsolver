
#makefile for qsolver program
#'make' to compile, 'make run' to run program
#'make utest' to compile unit tests, 'make runtest' to run all tests
#'make fulltest' to comeple system test, 'make runfulltest' to run system test
#'make clean' to clean object files and executables


#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic -lm
RUN = ./runme
RUNTEST = ./runutest
RUNSYSTEMTEST = ./runsystemtest

main: main.o
	$(CC) $(CFLAGS) -o runme main.o input.o validate.o mysqrt.o disc.o qsolve.o output.o -lm

main.o:
	$(CC) $(CFLAGS) -c main/main.c input/input.c disc/disc.c mysqrt/mysqrt.c output/output.c qsolve/qsolve.c validate/validate.c

utest: utest.o
	$(CC) $(CFLAGS) -o runutest utest.o validate.o disc.o mysqrt.o qsolve.o -lm

utest.o:
	$(CC) $(CFLAGS) -c utests/utest.c validate/validate.c disc/disc.c mysqrt/mysqrt.c qsolve/qsolve.c

fulltest: fulltest.o
	$(CC) $(CFLAGS) -o runsystemtest fulltest.o disc.o mysqrt.o qsolve.o output.o -lm

fulltest.o:
	$(CC) $(CFLAGS) -c fulltest/fulltest.c disc/disc.c mysqrt/mysqrt.c qsolve/qsolve.c output/output.c -lm

runtest:
	$(RUNTEST)

runfulltest:
	$(RUNSYSTEMTEST)

run:
	./runme

clean:
	rm -f *.o *.out runme runsystemtest runutest
