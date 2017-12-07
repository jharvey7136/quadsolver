



#include "../main/main.h"

int testone();
int testtwo();
int testthree();


int main(int argc, char *argv[])
{

/**********RUN TEST ONE**********/
  if(testone() != 1 )
  {
    printf("test 1 FAILED\n");
  }
  else
  {
    printf("******test 1 PASSED******\n" );
  }

  /**********RUN TEST TWO**********/
  if(testtwo() != 1 )
  {
    printf("test 2 FAILED\n");
  }
  else
  {
    printf("******test 2 PASSED******\n" );
  }

  /**********RUN TEST THREE**********/
  if(testthree() != 1 )
  {
    printf("test 3 FAILED\n");
  }
  else
  {
    printf("******test 3 PASSED******\n" );
  }


  return 0;
}



/****************************TEST ONE*****************************/
int testone(){

  int ret = 0;

  double variables[3];
  double roots[2];

  variables[0] = 2;
  variables[1] = 8;
  variables[2] = 6;

  printf("\n******Test 1******\n");
  printf("a=2 b=8 c=6\n");
  printf("Discriminant should equal 16\n");
  printf("Roots should equal -3 and -1\n");
  printf("Calculating...\n\n");

  double disc = discriminant(variables);    //calculate discriminant

  if(disc != 16){
    printf("Discriminant operation FAILED\n");
    ret = 0;
  }

  printf("---Program solutions---\n" );
  printf("Discriminant: %f\n", disc);

  if(disc > 0 || disc == 0)   //disc positive: 2 real roots. disc = zero: 1 root
  {
    if (qsolve(variables, roots) == 0)  //calculate roots
    {
      if(roots[0] == -3 && roots[1] == -1)
      {
        ret = 1;
      }
      else
      {
        printf("Incorrect roots! Qsolve FAILED\n" );
        ret = 0;
      }

      output(roots[0], roots[1]);   //display roots
    }
    else
    {
      perror("qsolve error");
      printf("Qsolve operation FAILED\n");
      ret = 0;
    }
  }
  else    //disc negative: complex solutions
  {
    printf("Complex solutions\n\n");
    ret = 0;
  }

  return ret;
}
/*************************************************************/


/****************************TEST TWO*****************************/
int testtwo(){

  int ret = 0;

  double variables[3];
  double roots[2];

  variables[0] = 5;
  variables[1] = 34;
  variables[2] = 24;

  printf("\n******Test 2******\n");
  printf("a=5 b=34 c=24\n");
  printf("Discriminant should equal 676\n");
  printf("Roots should equal -6 and -0.8\n");
  printf("Calculating...\n\n");

  double disc = discriminant(variables);    //calculate discriminant

  if(disc != 676){
    printf("Discriminant operation FAILED\n");
    ret = 0;
  }

  printf("---Program solutions---\n" );
  printf("Discriminant: %f\n", disc);

  if(disc > 0 || disc == 0)   //disc positive: 2 real roots. disc = zero: 1 root
  {
    if (qsolve(variables, roots) == 0)  //calculate roots
    {
      if(roots[0] == -6 && roots[1] == -0.8)
      {
        ret = 1;
      }
      else
      {
        printf("Incorrect roots! Qsolve FAILED\n" );
        ret = 0;
      }

      output(roots[0], roots[1]);   //display roots
    }
    else
    {
      perror("qsolve error");
      printf("Qsolve operation FAILED\n");
      ret = 0;
    }
  }
  else    //disc negative: complex solutions
  {
    printf("Complex solutions\n\n");
    ret = 0;
  }

  return ret;
}
/*************************************************************/



/*************************TEST THREE************************************/
int testthree()
{
  int ret = 0;

  double variables[3];
  double roots[2];

  variables[0] = 2;
  variables[1] = 8;
  variables[2] = 8;

  printf("\n******Test 3******\n");
  printf("a=2 b=8 c=8\n");
  printf("Discriminant should equal 0\n");
  printf("Roots should equal -2 and -2\n");
  printf("Calculating...\n\n");

  double disc = discriminant(variables);    //calculate discriminant

  if(disc != 0){
    printf("Discriminant operation FAILED\n");
    ret = 0;
  }

  printf("---Program solutions---\n" );
  printf("Discriminant: %f\n", disc);

  if(disc > 0 || disc == 0)   //disc positive: 2 real roots. disc = zero: 1 root
  {
    if (qsolve(variables, roots) == 0)  //calculate roots
    {
      if(roots[0] == -2 && roots[1] == -2)
      {
        ret = 1;
      }
      else
      {
        printf("Incorrect roots! Qsolve FAILED\n" );
        ret = 0;
      }

      output(roots[0], roots[1]);   //display roots
    }
    else
    {
      perror("qsolve error");
      printf("Qsolve operation FAILED\n");
      ret = 0;
    }
  }
  else    //disc negative: complex solutions
  {
    printf("Complex solutions\n\n");
    ret = 0;
  }

  return ret;
}
