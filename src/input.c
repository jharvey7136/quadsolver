#include "main.h"


int input(double *a, double *b, double *c)
{

  printf("Enter Input (a b c): ");

  if(scanf("%lf %lf %lf", a, b, c) != 3)
  {
    printf("Invalid input. Enter numerical values. Example: 1 2 3 \n");
  }







  return 0;
}
