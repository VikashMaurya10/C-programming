//Function with no argument and no return volue.
#include <stdio.h>
void func1(void);
void func2(void);
void main()
{
    func1();
    func2();
}
void func1(void)
{
    printf("How are you?\n");
}
void func2(void)
{
    printf("I am fine.\n");
}