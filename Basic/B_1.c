//
#include<stdio.h>

void main()
{
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
   i=1;
    
    while (i<=n)

    {
      sum=sum+i;
      i=i+1;
        /* code */
    }
    printf("Frist %d digit of sum= %d\n",n,sum);
}