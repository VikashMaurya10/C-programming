// Write a program using function:
// Function with argument and return value.

#include <stdio.h>
int factorial(int);
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // factorial(n);
    printf("%d!=%d\n", n,factorial(n));
}
int factorial(int n)
{
    int i, factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return (factorial);
}