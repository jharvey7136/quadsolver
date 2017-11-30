#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototypes
int input(char * line, size_t size);

void menu();

int validate(char * line, double variables[]);

double mysqrt(double value);

double discriminant(double variables[]);

int qsolve(double variables[], double roots[]);
