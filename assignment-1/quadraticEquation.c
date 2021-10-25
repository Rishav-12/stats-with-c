// This program calculates the roots of a quadratic equation ax^2 + bx + c = 0
#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c;
  printf("Enter the coefficients a, b, c\n");
  scanf("%f %f %f", &a, &b, &c);
  float d = pow(b*b - 4*a*c, 0.5);
  float root1 = (-b + d) / (2*a);
  float root2 = (-b - d) / (2*a);
  printf("The roots of the equation are %f, %f\n", root1, root2);
  return 0;
}
