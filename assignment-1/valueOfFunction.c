// This program calculates the value of the function
// f(x) = 3sin(e^x) + 4tan-1(e^x) / 7log(x^2 + 5x^4)
#include <stdio.h>
#include <math.h>

int main(void) {
  float x;
  printf("Enter the value of x for the function:\n");
  scanf("%f", &x);
  float f = (3*sin(exp(x)) + 4*atan(exp(x))) / (7*log(x*x + 5*pow(x,4)));
  printf("The value of the function is %f\n", f);
  return 0;
}
