/* Write a program to accept n digit number in reverse word it
and check weather it palindrom (i.e 121-->121) or not(132-->231).*/

#include <stdio.h>
void main()
{
    int n, r, reversed, original;
UP:
    printf("Enter the value: ");
    scanf("%d", &n);
    reversed = 0;
    original = n;
    while (n > 0)
    {
        r = n % 10;
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    if (original == reversed)
    {
        printf("%d is Palandrom Number\n", original);
    }
    else
    {
        printf("\a%d is not Palandrom number\n", original);
        goto UP;
    }
}