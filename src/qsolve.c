

#include "main.h"

int qsolve(double variables[], double roots[])
{
  int result = 0;



  double disc = discriminant(variables);
  double sq = mysqrt(disc);

  if (sq < 0)
  {
    result = -1;
  }

  sq = fabs(sq);

  roots[0] = -(variables[1] + sq) / (2 * variables[0]);
  roots[1] = -(variables[1] - sq) / (2 * variables[0]);

  return result;





}
