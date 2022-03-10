// To Print a Flag.
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Entre a naumbr: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
