// basic of pointer program
#include <stdio.h>
void main()
{
    int x = 10, y = 20;
    int *ptr, *p;
    ptr = &x;
    p = &y;
    printf("\nValue of x= %d\n", x);
    printf("Value of *ptr = %d\n", *ptr);
    printf("Address of x= %x\n", &x);
    printf("Address of x= %x\n", ptr);
    printf("-----------------------------\n");
    printf("Value of y= %d\n", y);
    printf("Value of *p = %d\n", *p);
    printf("Address of y= %x\n", &y);
    printf("Address of y= %x\n", p);
}