#include <stdio.h> 
#include <float.h> 
 
int main() 
{ 
   printf("Storage size of float: %d\n", sizeof(float));
   printf("Minimum float positive value: %e\n", FLT_MIN);
   printf("Maximum float positive value: %e\n", FLT_MAX);
   printf("Precision value: %d\n", FLT_DIG);

return 0;

} 