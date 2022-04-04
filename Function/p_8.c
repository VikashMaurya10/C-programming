// Write a program to sum of two number using Function.
#include <stdio.h>
void value(void);
void main()
{
    value();
}
void value(void)
{
    int year = 1, period = 5, amount = 5000;
    float sum, inrate = 0.12;
    sum = amount;
    while (year <= period)
    {
        sum = sum * (1 + inrate);
        year = year + 1;
    }
    printf("total amount is %f", sum);
}