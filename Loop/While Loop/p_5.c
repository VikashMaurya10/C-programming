//find the prime number series.
#include <stdio.h>
void main()
{
    int n, i, j, count;
    printf("Enter the number:");
    scanf("%d", &n);
    i = 1;
    printf("prime number series: ");
    while (i <= 3)
    {
        printf("%d,", i);
        i++;
    }
    j = 5;
    count = 3;
    while (j <= n)
    {
        count = count + 1;
        printf("%d,",j);
        j = j + 2;
    }
    printf("\nTotal Number of Prime Number is: %d\n", count);
}