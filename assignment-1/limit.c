// This program calculates N(e) for every e > 0, such that |a - 1| < e for all n >= N(e)
#include <stdio.h>

int main(void) {
  float e;
  printf("Enter the value of epsilon\n");
  scanf("%f", &e);
  int n = 1;
  float f;
  while(1 == 1)
  {
    float a = n / (float)(n+2);
    // Taking the modulus of a - 1 -> stored in f
    if((a - 1) < 0)
    {
      f = -(a - 1);
    }
    else
    {
      f = a - 1;
    }
    if(f < e)
    {
      break;
    }
    n++;
  }// end of while loop
  printf("The value of N(e) = %d\n", n);
  return 0;
}
