//
#include <stdio.h>

void main()
{
    int n, i, count = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
        count = count + 1;
    }
    printf("sum of digit is= %d\n",sum);
    printf("Number of digit is= %d\n",count);
}