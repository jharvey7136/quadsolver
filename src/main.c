/*
  john harvey, rawan alfaraj

  file: main.c
  'main' of program. this is a command line program to solve the quadratic equation.
  functions are called to do individual calculations throughout the equation.
  reads in one line of input from user (must be in 1 2 3 format).
  validates input and stores three positive digits into a double array.
  calculates discriminant (must be positive, does not handle imaginary numbers)
  applies discriminant to custom square root functon and calculates the rest of the equation.
  outputs roots as x1 and x2.
*/

#include "main.h"

int main(int argc, char *argv[])
{
  //variables
  double variables[3];
  double roots[2];
  char * line = malloc(80);
  size_t size = 80;

  menu();

  if(input(line, size) == 0)
  {

    while(validate(line, variables) != 0)
    {
      printf("Invalid Input. Re-enter 3 numbers. (Ex. 5 10 20): " );
      input(line, size);
    }
    //testing purposes
    //printf("Numbers Inputted:\n" );
    //printf("%f\n", variables[0] );
    //printf("%f\n", variables[1] );
    //printf("%f\n\n", variables[2] );

    double disc = discriminant(variables);    //calculate discriminant

    //testing
    //printf("Disc = %f\n\n", disc);

    if(disc > 0 || disc == 0)   //disc positive: 2 real roots. disc = zero: 1 root
    {
      if (qsolve(variables, roots) == 0)  //calculate roots
      {
        output(roots[0], roots[1]);   //display roots
      }
      else
      {
        perror("qsolve error");
      }
    }
    else    //disc negative: complex solutions
    {
      printf("Complex solutions\n\n");
    }

  }
  return 0;
}


//simple menu for beginning of program
void menu()
{
  printf("\nQuadratic Equation Solver\n");
  printf("Enter variables a, b, and c to solve (a b c)\n");
  printf("Enter Input: ");
}
