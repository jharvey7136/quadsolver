/*
  file: utest.c
  unit tests for all functions in the quad solver program.
  tests each function with good and bad input, prints results
*/

#include "main.h"

int main(int argc, char *argv[]){

  //variables used for testing
  int validateresult;
  double variables[3];
  char valtest1[] = "a b c";
  char valtest2[] = "3 4 5 6";
  char valtest3[] = "9";
  char valtest4[] = "1 2 3";
  double sqTest;
  double roots[2];
  int i = 0;

  //test validate.c function with good and bad values
  printf("---Input validation Tests---\n");
  //bad inputs
  if(validate(valtest1, variables) != 0) printf("Test a b c failed validation\n");
  if(validate(valtest2, variables) != 0) printf("Test 3 4 5 6 failed validation\n");
  if(validate(valtest3, variables) != 0) printf("Test 9 failed validation\n");
  //good input
  if(validate(valtest4, variables) == 0) printf("Test 1 2 3 passed validation\n\n");

  //test disc.c function with good and bad values
  printf("---Discriminant Tests---\n" );
  //correct answers
  variables[0] = 1; variables[1] = 5; variables[2] = 3;
  if(discriminant(variables) == 13) printf("Test 1 5 3 discriminant = 13 passed\n" );
  variables[0] = 4; variables[1] = 2; variables[2] = 6;
  if(discriminant(variables) == -92) printf("Test 4 2 6 discriminant = -92 passed\n" );
  //incorrect answer
  variables[0] = 3; variables[1] = 8; variables[2] = 1;
  if(discriminant(variables) != 10) printf("Test 3 8 1 discriminant = 10 failed (52 is correct)\n\n" );

  //test mysqrt.c function with good and bad values
  printf("---Mysqrt Tests---\n");
  sqTest = -2;  //test mysqrt with negative value
  if (mysqrt(sqTest) == -1) printf("Test mysqrt(-2): failed (negative value)\n" );
  //correct answer
  sqTest = 16;
  if (mysqrt(sqTest) == 4) printf("Test mysqrt(16) = 4: passed\n\n" );

  //test qsolve.c function with good and bad values
  printf("---Quadratic Solver Tests---\n" );
  //test 2 real roots
  variables[0] = 1; variables[1] = 5; variables[2] = 3;
  if (qsolve(variables, roots) == 0) printf("Qsolve 1 5 3: 2 real roots passed\n" );
  printf("x1: %f\nx2: %f", roots[0], roots[1] );
  //test complex roots
  variables[0] = 4; variables[1] = 2; variables[2] = 6;
  if (qsolve(variables, roots) == -1) printf("Qsolve 4 2 6: complex roots passed\n" );
  printf("x1: %f\nx2: %f", roots[0], roots[1] );
  //test one real root
  variables[0] = 9; variables[1] = 12; variables[2] = 4;
  if (qsolve(variables, roots) == 0) printf("Qsolve 9 12 4: one root passed\n" );
  printf("x1: %f\nx2: %f\n\n", roots[0], roots[1] );

  return 0;
}
