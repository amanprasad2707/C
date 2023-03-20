#include <stdio.h>  
#include "Dangling_pointer.c"
#define PI 3.14
#define Max_length 10
#define SQUARE(r) r*r
int main(){
  int var = 0;
  int r = 4;
  int *ptr = functionDangling();
  printf("The value of PI is: %f\n",PI);
  printf("The area of the circle is: %f\n",PI*SQUARE(r));

  return 0;
}