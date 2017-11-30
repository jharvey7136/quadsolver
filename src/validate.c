

#include "main.h"



int validate(char * line, double variables[])
{

  int result = 0;
  char * token;
  //const char del[2] = " "  ;
  token = strtok(line, " ");  //get first token of line

  int i = 0;    //counter for loop

  while (token != NULL)     //walk through rest of tokens, NULL pointer returned if no tokens are left
  {
    if (!(token[0] >= '0' && token[0] <= '9'))
    {
       result = -1;
    }
    if (i < 3)    //store 3 variables in array
    {
      variables[i] = atof(token);   //convert string variables into floats and store in array
    }

    token = strtok(NULL, " ");
    i++;
  }



  return result;
}
