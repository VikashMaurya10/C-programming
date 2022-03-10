// write a program to enter your name and print.
#include <stdio.h>
void main()
{
    int i, n;
    char name[50];
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("Enter your name: ");
    scanf("%s", &name);
    i = 1;
    do
    {
        printf("%s\n", name);
        i++;
    } while (i <= n);
}