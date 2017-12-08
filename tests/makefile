




#macros
CC = gcc
#CFLAGS = -Wall -std=c99 -pedantic -lm
RUN = ./runtests




tests: tests.o
	$(CC) $(CFLAGS) -o runtests tests.o qsolve.o disc.o mysqrt.o -lm

tests.o:
	$(CC) $(CFLAGS) -c tests.c ../src/qsolve/qsolve.c ../src/disc/disc.c ../src/mysqrt/mysqrt.c

run:
	$(RUN)

clean:
	rm -f *.o *.out runtests
