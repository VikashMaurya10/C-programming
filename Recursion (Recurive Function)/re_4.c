//Find the Exp(power) of a number.

#include <stdio.h>
int exp(int, int);
void main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d%d", &a, &b);
    printf("The Exp(power) of a=%d\n",exp(a,b));
}
int exp(int x, int y)
{

    if (y == 0)
    {
        return 1;
    }
    else
    {
        return (x * exp(x, (y - 1)));
    }
}