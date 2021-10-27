#include <stdio.h>

// Variable declare
extern int a, b;
extern int c;
extern float d;

int main ()
{
  // Variable definition
  int a, b;
  int c;
  float d;

  //Actual initalation
  a = 10;
  b = 10;

  c = a + b;
  printf("Value of c : %d\n", c);

  d = 7.0/2.0;
  printf("Value of d : %.2f", d);

  return 0; 

}