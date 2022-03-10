// Write a program to Find the sum of the first n intger.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    i = 1;
    do
    {
        sum = sum + i;
        printf("Frist %d digit of %d\n", i, sum);
        i++; //or i++,i=i+1
    } while (i < n);
    

}