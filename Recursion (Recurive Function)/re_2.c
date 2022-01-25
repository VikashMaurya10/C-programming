//Find The greatest common divisor.
#include <stdio.h>
int GCD1(int, int);
int GCD2(int, int);

int main()
{
    int n1, n2;
    printf("Enter two number : ");
    scanf("%d%d", &n1, &n2);
    printf("GCD1=%d\n", GCD1(n1, n2));
    printf("GCD2=%d\n", GCD2(n1, n2));
    return 0;
}
int GCD1(int x, int y)
{
    int remender;
    remender = x % y;
    if (remender == 0)
    {
        return y;
    }
    else
    {
        return (GCD1(y, remender));
    }
}
int GCD2(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else /*b>a*/
        {
            b = b - a;
        }
    }
    return b; // or return a;
}