// Find the power of two entered number i.e (x^y).
#include <stdio.h>
int power(int, int);

int main()

{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("%d\n", power(a, b));
}
int power(int x, int y)
{
    int i, s=1;
    if (y == 0)
    {
        return 1;
    }
    for (i = 1; i <= y; i++)
    {
        s= s * x;
    }
    return s;
}