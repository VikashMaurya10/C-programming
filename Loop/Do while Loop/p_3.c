/* Write a program to Find the sum of the  following series.
1+1/2+1/3+1/4+-----+1/n*/
#include <stdio.h>
void main()
{

    int n, i; 
    float sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (float)1 / i;
    }
    printf("Sum of first %d series is %.3f\n", n, sum);
}