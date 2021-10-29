#include <stdio.h>

int main()
{
  int a = 21;
  int b = 10;
  int c;

  if (a == b) // a == b
  {
    printf("Line 1 - Value %d is equal to %d\n", a, b);
  }
  else
  {
    printf("Line 1 - Value %d is not equal to %d\n", a, b);
  }

  if (a < b) // a < b
  {
    printf("Line 2 - Value %d is less than %d\n", a, b);
  }
  else
  {
    printf("Line 2 - Value %d is not less than %d\n", a, b);
  }

  if (a > b) // a > b
  {
    printf("Line 3 - Value %d is greater than %d\n", a, b);
  }
  else
  {
    printf("Line 3 - Value %d is not greater than %d\n", a, b);
  }
  /*
This value for check less and greater than operations
*/
  a = 5;
  b = 15;
  if (a <= b) // a <= b
  {
    printf("Line 4 - Value %d is either less than or equal %d\n", a, b);
  }

  if (a >= b) // a >= b
  {
    printf("Line 5 - Value %d is either greather than or equal %d", a, b);
  }
}
