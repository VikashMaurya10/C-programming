// Write a program to find the given number is armstrong number/not.
#include <stdio.h>
void main()
{
    int n, i, r, k, armstrong;
UP:
    printf("Enter the number: ");
    scanf("%d", &n);
    armstrong = 0;
    i = 0;
    k = n;
    while (n > 0)
    {
        r = n % 10;
        armstrong = armstrong + (r * r * r);
        n = n / 10;
        i = i + 1;
    }
    printf("Number of digit: %d\n", i);
    if (k == armstrong)
    {
        printf("Number is a armstrong number\n");
    }
    else
    {
        printf("Number is not a armstrong number\n");
        goto UP;
    }
}
