

#include <math.h>
#include "main.h"


double mysqrt(double value)
{
  double result;

  if(value < 0)
  {
    result = -1;
  }
  else
  {
    result = sqrt(value);
  }

  return result;

}
