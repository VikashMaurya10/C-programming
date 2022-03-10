// write a program to convert digits into words.
#include <stdio.h>

void main()
{
    int n,y, reverse = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse of entered digit= %d\n", reverse);
    while (reverse > 0)
    {
        y = reverse % 10;
        if (y == 0)
        {
            printf("Zero ");
        }
        else if (y == 1)
        {
            printf("One ");
        }
        else if (y == 2)
        {
            printf("Two ");
        }
        else if (y == 3)
        {
            printf("Three ");
        }
        else if (y == 4)
        {
            printf("Four ");
        }
        else if (y == 5)
        {
            printf("Five ");
        }
        else if (y == 6)
        {
            printf("Six ");
        }
        else if (y == 7)
        {
            printf("Seven ");
        }
        else if (y == 8)
        {
            printf("Eight ");
        }
        else if (y == 9)
        {
            printf("Nine ");
        }
        reverse = reverse/10;
    }
    printf("\n");
}