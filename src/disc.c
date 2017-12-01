/*
  file: disc.c
  function to simply calculate the discriminant of the quadratic equation.
  takes in the variables a, b, and c entered by user, and returns a double for the discriminant
*/
#include "main.h"   

double discriminant(double variables[])
{
  //calculates b^2 - 4ac
  //variables[0] = a, variables[1] = b, variables[2] = c
  double disc = (variables[1] * variables[1]) - (4 * variables[0] * variables[2]);

  return disc;
}
