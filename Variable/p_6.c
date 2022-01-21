// Example of The auto storage class.
#include <stdio.h>
#include<conio.h>
void func1()
{
    int a = 10;
    printf("a=%d\n", a);
}
void func2()
{
    int a = 20;
    printf("a=%d\n", a);
}
void main()
{
    int a = 30;
    func1();
    func2();
    printf("a=%d\n", a);
    getch();
}