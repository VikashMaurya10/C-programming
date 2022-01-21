// Example of Global variable.
#include <stdio.h>
int add_number(void); /* Function prototype.*/
int num1,num2; /*Global variable*/
void main()
{
    auto int result; /*Local variable*/
    num1 = 100;
    num2 = 200;
    result = add_number(); //called function
    printf("The sum of %d+%d is: %d\n", num1, num2,result);
    // printf("The sum of %d+%d is %d\n", num1, num2,sum); /*Error in sum because sum is a local variable*/
}
int add_number(void)
{
    auto int sum;   /*Local variable*/
    sum = num1 + num2; /*Use of global variable*/
    return sum;
}
