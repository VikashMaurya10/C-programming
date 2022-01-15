// write a program to find their Multiplication.
#include <stdio.h>
int mult(int, int);
void main()
{
    int a, b, multiplication;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    multiplication = mult(a, b);
    printf("multiplication %d*%d=%d\n",a,b,multiplication);
}
int mult(int x, int y)
{
    int m;
    m = x * y;
    return m;
}