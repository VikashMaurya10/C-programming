//
#include <stdio.h>
int GCD(int, int);
void main()
{
    int x, y;
    printf("Enter your number: ");
    scanf("%d%d", &x, &y);
    printf("GCD of these number=%d\n", GCD(x, y));
}
int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return GCD((a - b), b);
    }
    else
    {
        return GCD(a, (b - a));
    }
}
