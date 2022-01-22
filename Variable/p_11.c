// The e to the power of x in mathematics is equal to exp(x) in C programming.

#include <math.h>
#include <stdio.h>

int main()
{
  double x = 12.00, result;
  result = exp(x);
  printf("Exponential of %lf = %.3lf\n", x, result);
  return 0;
}
