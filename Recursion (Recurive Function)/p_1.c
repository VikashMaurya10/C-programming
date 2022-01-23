// Find Factorial of a number, by using Recursion.
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &n);
    printf("factorial of %d! = %d\n", n, factorial(n));
}
int factorial(int n)
{
    int result;
    if (n == 0)
    {
        return (1);
    }
    else
    {
        result = n * factorial(n - 1);
        return (result);
    }
}