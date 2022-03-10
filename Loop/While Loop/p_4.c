// write a program to a number and find total number of digit and count the digit.
#include <stdio.h>
void main()
{
    int n, sum = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
        count = count + 1;
    }
    printf("sum of the Number of digit is %d\n", sum);
    printf("Number of Digit is:%d\n", count);
    
}