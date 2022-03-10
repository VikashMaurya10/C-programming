// Write a program to find thr sum of series
// x-x^3/3!+x^5/5!-x^7/7!

#include <stdio.h>
void main()
{
    int n, x, i, factorial=1, term,sum;
    // printf("Enter the value of x number: ");
    // scanf("%d", &x);
    printf("Enter the value of terms: ");
    scanf("%d", &n);
    sum=1;
    for ( i = 1; i <=n; i++)
    {
        factorial *=i;
    }
        printf("%d\n",factorial);
}
    