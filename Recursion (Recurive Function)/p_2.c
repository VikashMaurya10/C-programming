//Find THe greatest common divisor.
#include <stdio.h>
int GCD(int, int);

void main()
{
    int n1, n2;
    printf("Enter two number : ");
    scanf("%d%d", &n1, n2);
    printf("%d\n", GCD(n1, n2));
}
int GCD(int x, int y)
{
    int remender;
    remender = x % y;
    if (remender == 0)
    {
        return y;
    }
    else
    {
        return (GCD(y, remender));
    }
}
