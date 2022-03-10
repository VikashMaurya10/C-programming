// write a program to equal two number by using 'if' statement.
#include <stdio.h>

void main()
{
    int i, n;
    printf("Enter the Frist Number: ");
    scanf("%d", &n);
    printf("Enter the Second Number: ");
    scanf("%d", &i);
    i = 1;
    if (i == n) //((i-n)==0)
    {
        printf("Number is equal.\n"); 
    }
    else 
    {
      printf("Number is not equal.\n"); 
    }
    
}