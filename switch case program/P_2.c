#include <stdio.h>

int main()
{
    char opt;
    // int a, b;
    float a,b,result;
    printf("Select the oprator( + , - , * , / )  ");
    scanf("%c", &opt);

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);
    
    switch (opt)
    {
    case '+':
        result = a + b;
        printf("addition a and b is:%.3f\n ", result);
        break;
    case '-':
        result = a - b;
        printf("substraction a and b is:%.3f\n ", result);
        break;

    case '*':
        result = a * b;
        printf("Multiplication a and b is:%.3f\n ", result);
        break;
    case '/':

        if (b == 0)
        {
            printf("Input another value of b: ");
            scanf("%d", &b);
        }
        result = a / b;
        printf("Division a and b is:%.3f\n ", result);

        break;

    default:
        printf("something went wrong");

        return 0;
    }
}   