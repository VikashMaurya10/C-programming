//find the factorial of any number.
#include <stdio.h>

void main()
{
    int n, Factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (1 <= n)
    {
        Factorial = Factorial * n;
        n--; /* 5*4*3*2*1 */
    }
    printf("Fatorial=%d\n", Factorial);
}
