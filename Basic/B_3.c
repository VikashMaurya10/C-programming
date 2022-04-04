//
#include <stdio.h>

void main()
{
    int n, i=1,sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    do
    {
        if (n % 2 != 0)
        {
            sum = sum + i;
            printf("sum of %d digit odd number=%d\n", i, sum);
        }
        i=i+1;
    } while (i <= n);
}