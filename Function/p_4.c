//Function with argument and no return value.
#include <stdio.h>
void add(float, float);
void sub(float, float);
void mult(float, float);
void divi(float, float);
int main()
{
    float a, b;
    char choice;
    printf("Enter your choice ('+', '-', '*', '/' ): ");
    scanf("%c", &choice);
    printf("Enter the value of  a : ");
    scanf("%f", &a);
    printf("Enter the value of  b : ");
    scanf("%f", &b);
    switch (choice)
    {
    case '+':
        add(a, b);
        break;
    case '-':
        sub(a, b);
        break;
    case '*':
        mult(a, b);
        break;
    case '/':
        divi(a, b);
        break;
    default:

        printf("Invalid choice\n");
        break;
    }
    return 0;
}
void add(float x, float y)
{
    float sum;
    sum = x + y;
    printf("sum: %.3f\n", sum);
}
void sub(float x, float y)
{
    float sub;
    sub = x - y;
    printf("sub: %.3f\n", sub);
}
void mult(float x, float y)
{
    float multi;
    multi = x * y;
    printf("multi: %.3f\n", multi);
}
void divi(float x, float y)
{
    if (y == 0)
    {
        printf("\aYou can not enter 'zero'.\n");
        printf("Enter another value of b: ");
        scanf("%f", &y);
    }
    float divi;
    divi = x / y;
    printf("divi: %.3f\n", divi);
}