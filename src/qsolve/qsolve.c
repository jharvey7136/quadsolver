/*
  file: qsolve.c
  function to apply quadratic equation to variables a, b, and c.
  returns successfully if there are 2 or 1 root(s).
  returns unsuccessfully if there are complex solutions.
*/

#include "../main/main.h"  

int qsolve(double variables[], double roots[])
{
  int result = 0;

  double disc = discriminant(variables);  //get discriminant
  double sq = mysqrt(disc);   //get square root

  if (sq < 0)
  {
    result = -1;
  }

  sq = fabs(sq);    //apply absolute value

  //calculates the roots: -(b +- sq) / 2a
  roots[0] = -(variables[1] + sq) / (2 * variables[0]);
  roots[1] = -(variables[1] - sq) / (2 * variables[0]);

  return result;
}
