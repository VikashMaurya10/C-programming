// Write a program to accept a number and findout it is odd/even.
#include <stdio.h>
void main()
{
    int n;
    printf("Entr your number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number is Even\n"); /* A number divied by 2 and remainder Zero */
    }
    else
    {
        printf("\aNumber is odd\n");
    }
}