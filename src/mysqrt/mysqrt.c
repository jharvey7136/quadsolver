/*
  file: mysqrt.c
  function for custom square root.
  using a custom square root allows testing.
  takes in a positive double to square root, returns result if successful
*/

#include "../main/main.h"  

double mysqrt(double value)
{
  double result;

  if(value < 0)   //test for positive value. does not handle negatives
  {
    result = -1;
  }
  else
  {
    result = sqrt(value);
  }

  return result;
}
