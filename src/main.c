


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

    //printf("Numbers Inputted:\n" );
    //printf("%f\n", variables[0] );
    //printf("%f\n", variables[1] );
    //printf("%f\n\n", variables[2] );

    double disc = discriminant(variables);    //calculate discriminant

    //printf("Disc = %f\n\n", disc);

    if(disc > 0 || disc == 0)   //disc positive: 2 real roots. disc = zero: 1 root
    {
      if (qsolve(variables, roots) == 0)
      {
        output(roots[0], roots[1]);
      }
      else
      {
        perror("qsolve error");
      }
    }
    else    //disc negative: complex solutions
    {
      printf("Complex solutions\n");
    }

  }

  return 0;
}



void menu()
{
  printf("\nQuadratic Equation Solver\n");
  printf("Enter variables a, b, and c to solve (a b c)\n");
  printf("Enter Input: ");
}
