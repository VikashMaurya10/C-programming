// Write a program to generate Fiboncai series.
#include <stdio.h>
void main()
{
    int n1, n2, n3 ,n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("Fiboncai series is: %d,%d",n1,n2);
    i=2;
    do
    {
        n3=n1+n2;
       printf(",%d",n3);
       n1=n2;
       n2=n3;
       i++;
    } while (i<n);
    printf("\n");
}