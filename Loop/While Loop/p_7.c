// Fnd the GCD of two numbers.
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    while (a != b)
    {
        int result;
        if (a > b)
        {
            a = a - b;
        }
        else /*b>a*/
        {
            b = b - a;
        }
    }
    printf("GCD of these numbers is %d\n", b);
}
