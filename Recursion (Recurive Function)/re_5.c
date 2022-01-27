//Find the first n number of fibonacci series.
#include <stdio.h>
int fibonacci(int);

void main()
{
    int i, n;
    printf(" Enter your number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("fibonacci (%d)=%d\n", i, fibonacci(i));
    }
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}