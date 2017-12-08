


#include "../src/main/main.h"
#include <stdio.h>
#include <math.h>

//equal value test
static void assert_equal(char * line, char * str, double a, double b) {
  if( a != b ) {
    printf("error %s: %s, %f != %f\n",
              line , str ,  a , b );
  }
}

//NaN test
static void assert_nan(char * line, char * str, double a) {
  if( !isnan(a) ) {
    printf("error %s: %s, %f != nan\n",
              line , str ,  a  );
  }
}


//INF test
static void assert_inf(char * line, char * str, double a) {
  if( !isinf(a) ) {
    printf("error %s: %s, %f != inf\n",
              line , str ,  a  );
  }
}


//float test
static void assert_eqld(char * line, char * str, double a, double b) {
  if( (a - b) > 0 ) {
    printf("error %s: %s, %f != %f\n",
              line , str ,  a , b );
  }
}







int main(int *argc, char **argv)
{
  double variables[3];
  double roots[2];
  int ret;

//test 1
  variables[0] = 5.0;
  variables[1] = 5.0;
  variables[2] = 0;
  ret = qsolve(variables, roots);
  assert_equal("test1", "ret", ret, 0);
  assert_equal("test1", "x1", roots[0], -1.0);
  assert_equal("test1", "x2", roots[1], 0.0);



//test 2
  variables[0] = 4.0;
  variables[1] = -1.0;
  variables[2] = -3.0;
  ret = qsolve(variables, roots);
  assert_equal("test2", "ret", ret, 0);
  assert_equal("test2", "x1", roots[0], -0.25);
  assert_equal("test2", "x2", roots[1], -1.0);



//test 3 - zero
  variables[0] = 0;
  variables[1] = 0;
  variables[2] = 0;
  ret = qsolve(variables, roots);
  assert_equal("test3", "ret", ret, 0);
  assert_nan("test3", "x1", roots[0]);
  assert_nan("test3", "x2", roots[1]);


//test 4
  variables[0] = 4;
  variables[1] = 2;
  variables[2] = 0;
  ret = qsolve(variables, roots);
  assert_equal("test4", "ret", ret, 0);
  assert_equal("test4", "x1", roots[0], 0);
  assert_equal("test4", "x2", roots[1], -0.5);


//test 5 - float equality
  variables[0] = 2.5;
  variables[1] = 4;
  variables[2] = -3;
  ret = qsolve(variables, roots);
  assert_equal("test5", "ret", ret, 0);
  assert_eqld("test5", "x1", roots[0], 0.6081824);
  assert_eqld("test5", "x2", roots[1], -1.2331824);


  //test 6 - nan
  variables[0] = sqrt(-1);
  variables[1] = sqrt(-1);
  variables[2] = sqrt(-1);
  ret = qsolve(variables, roots);
  assert_equal("test6", "ret", ret, -1);
  assert_nan("test6", "x1", roots[0]);
  assert_nan("test6", "x2", roots[1]);

  //test 7 - inf
  variables[0] = INFINITY;
  variables[1] = INFINITY;
  variables[2] = INFINITY;
  ret = qsolve(variables, roots);
  assert_equal("test7", "ret", ret, -1);
  assert_inf("test7", "x1", roots[0]);
  assert_inf("test7", "x2", roots[1]);







  return 0;
}
