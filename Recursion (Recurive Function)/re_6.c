//Example of Direct Recucurrsion.
#include <stdio.h>
int func(int);
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("%d!= %d\n", a, func(a));
}
int func(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * func(n - 1));
}