// Enter the three number and find the largest number.
#include <stdio.h>
void main()
{
  int a, b, c,Q;
  printf("Enter the value of A: ");
  scanf("%d", &a);
  printf("Enter the value of B: ");
  scanf("%d", &b);
  printf("Enter the value of C: ");
  scanf("%d", &c);
  if (a > c)
  {
    if (a > b)
    {
      printf("%d is largest\n", a);
    }
  }
  else
  {
    if (b > c)
    {
      printf("%d is largest\n", b);
    }
    else
    {
      printf("%d is largest\n", c);
    }
  }
  Q= a+b+c;
  printf("Sum of Number:%d\n",Q);
}
