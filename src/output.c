/*
  file: output.c
  function to simply output results.
  takes in the two roots as floats, x1 and x2.
  calculates and output absolute and relative error of x1 and x2.
*/

#include "main.h"
#include <float.h>

void output(float x1, float x2)
{

  double x1round = roundf(x1 * 100000 ) / 100000;
  double x2round = roundf(x2 * 100000 ) / 100000;

  printf("x1: %f\n", x1 );
  printf("x2: %f\n\n", x2 );

  //calculate relative and absolute error of x1
  double absoluteError1 = fabs(x1 - x1round);
  double relativeError1 = fabs((x1 - x1round) / x1round);
  printf("absolute error x1: %.*f\n", DBL_DIG-1, absoluteError1 );
  printf("relative error x1: %.*f\n", DBL_DIG-1, relativeError1 );

  //calculate relative and absolute error of x2
  double absoluteError2 = fabs(x2 - x2round);
  double relativeError2 = fabs((x2 - x2round) / x2round);
  printf("absolute error x2: %.*f\n", DBL_DIG-1, absoluteError2 );
  printf("relative error x2: %.*f\n\n", DBL_DIG-1, relativeError2 );





}
