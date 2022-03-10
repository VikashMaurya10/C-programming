// Find the power of three entered number i.e {(x^y)^z}.
#include <stdio.h>
int power(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", power(a, b, c));
}
int power(int x, int y, int z)
{
    int i, j, s = 1, S = 1;
    if (z == 0)
    {
        y = 1;
    }
    if (y == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }

    for (i = 1; i <= z; i++)
    {
        s = s * y;
    }
    for (j = 1; j <= s; j++)
    {
        S = S * x;
    }
    return S;
}