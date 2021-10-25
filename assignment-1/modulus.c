// This program computes the absolute value of a real number
#include <stdio.h>

int main(void) {
  float x;
  printf("Enter the value of x\n");
  scanf("%f", &x);
  float f = 0;
  if(x < 0)
  {
    f = -x;
  }
  else
  {
    f = x;
  }
  printf("Modulus value of x = %f\n", f);
  return 0;
}
