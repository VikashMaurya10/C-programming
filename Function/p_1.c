// Write a program to sum of two number using Function.
#include <stdio.h>
int add(int,int);
int main()
{
    int a, b, sum;
    printf("Enter The Two Number:");
    scanf("%d%d", &a, &b);
    sum = add(a, b);
    printf("sum is: %d\n", sum);
    return 0;
}
    int add(int x, int y)
{
    int m;
    m = x + y;
    return m;
}