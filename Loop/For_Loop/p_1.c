// Write a program to the sum of following series of nth term.
// 1-1/2+1/3-1/4.......+1/n
#include <stdio.h>
void main()
{
    int n, i;
    float sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (float)1 / i;
        }
        else
        {
            sum += (float)1 / i;
        }
    }
    printf("Sum of first %d series is %.3f\n", n, sum);
}