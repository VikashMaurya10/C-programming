//Function with no argument and no return volue.
#include <stdio.h>
void func1(void); /*Function prototype Decalaration*/
void func2(void);
void main()    /*calling function*/
{
    func1();    /*called function*/
    func2();    /*called function*/
}
void func1(void)
{
    printf("How are you?\n");
}
void func2(void)
{
    printf("I am fine.\n");
}