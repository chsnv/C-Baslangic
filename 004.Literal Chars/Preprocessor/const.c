#include <stdio.h>

int main ()
{
  const int LENGTH = 10;
  const int WIDTH = 5;
  const int NEWLINE = '\n';
  int Area;


  Area = LENGTH * WIDTH;
  printf("Value of Area: %d", Area);
  printf("%c", NEWLINE);

  return 0;
  
}