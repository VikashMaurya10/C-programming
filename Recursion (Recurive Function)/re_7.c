//Example of Indirect Recurrsion.
#include <stdio.h>
int func1(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * func2(n - 1);
}
int func2(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * func1(x - 1);
}
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Function 1 %d\n", func1(n));
    printf("Function 2 %d\n", func2(n));
}