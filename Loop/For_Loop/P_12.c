// Find the power of three entered number i.e {(x^y)^z}.
#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, p;
    printf("Enter three number: ");
    scanf("%d%d%d", &a, &b, &c);
    p = pow(a, pow(b, c));
    printf("%d\n", p);
}