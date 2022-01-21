//Example of call by value.
#include <stdio.h>
#include <conio.h>
void compute(int, int);
void main()
{
    int n1 = 100, n2 = 500, k;
    printf("The value before calling the function");
    printf("n1=%d and n2=%d\n", n1, n2);
    compute(n1, n2);
    getch();
}
void compute(int num1, int num2)
{
    num1 = num1 + 100;
    num2 = num2 + 100;
    printf("The value after calling function\n");
    printf("n1=%d and n2=%d\n", num1, num2);
}