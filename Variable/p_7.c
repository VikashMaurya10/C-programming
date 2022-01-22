// Example of regiter varibale. 
#include <stdio.h>
#include <math.h>
int power(int, int);

int main()
{
    int a = 3, b = 5, res1, res2;
    res2 = pow(a, b);
    res1 = power(a, b);
    printf("%d to the power of %d=%d\n", a, b, res1);
    printf("The value is: %d\n", res2);
    return 0;
}
int power(int a, int b)
{
    register int res = 1;
    int i;
    for (i = 1; i <= b; i++)
    {
        res = res * a;
    }
    return res;
}