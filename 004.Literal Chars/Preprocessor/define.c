#include <stdio.h>

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main ()
{
  int Area = LENGTH * WIDTH;

  printf("Area of Rectangle: %d",Area);
  printf("%c", NEWLINE);

  return 0;

}