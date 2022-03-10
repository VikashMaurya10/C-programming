// Find a number of Multiplication table.
#include <stdio.h>

void main()
{
    int n, i, j;
    printf("Enter your number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}