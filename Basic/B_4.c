//
#include <stdio.h>

void main()
{
    int n;
    float i = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    do
    {

        sum = sum + 1 / i;
        printf("sum of %.0f digit odd number=%.3f\n", i, sum);

        i++;
    } while (i <= n);
}