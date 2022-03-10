//find the sum of factorial series number.
#include <stdio.h>
void main()
{
   int n, i, Factorial, sum;
UP:
    Factorial = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        Factorial = Factorial * i;
        if (i != n)
        {
            printf("%d!+", i);
        }
        else
        {
            printf("%d!", i);
        }
        sum = sum + Factorial;
    }
    printf("=%d\n", sum);
    goto UP;
}