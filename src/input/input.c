/*
  file: input.c
  function to simply get input from user. no validation for numbers done here.
  tests for empty input, return character, and adds null terminating character at end.
  gets one line of input and stores in 'line'. returns 0 upon success
*/

#include "../main/main.h"  


int input(char * line, size_t size)
{
  int result = 0;

  if(fgets(line, size, stdin) == NULL)    //test for empty input
  {
    result = -1;
    //printf("failed if\n" );
  }
  else if(line[strlen(line)-1] != '\n') //test to make sure a return character is at the end
  {
    result = -2;
    //printf("failed else if\n" );
  }
  else
  {
    line[strlen(line)-1] = '\0';        //add null terminating character at the end
    result = 0;
    //printf("%s\n", line );
  }

  return result;
}
