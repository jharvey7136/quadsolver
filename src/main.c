


#include "main.h"



int main(int argc, char *argv[])
{
  double a, b, c;
  double variables[3];
  char * line = malloc(80);
  size_t size = 80;



  if(input(line, size) == 0)
  {

    while(validate(line, variables) != 0)
    {
      printf("Invalid Input. Re-enter 3 numbers. (Ex. 5 10 20): " );
      input(line, size);
    }

    //printf("%f\n", variables[0] );
    //printf("%f\n", variables[1] );
    //printf("%f\n", variables[2] );
  }








  return 0;
}



void menu()
{
  printf("\nQuadratic Equation Solver\n");
  printf("Enter variables a, b, and c to solve (a b c). Press 'q' to quit\n");
  printf("Enter Input: ");
}
