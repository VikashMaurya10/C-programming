//Wrie prpgram to find the sum of y=x^2+x+1 where x varies from -3 to 3.
#include <stdio.h>
void main()
{
    float x, y;
    printf("Enter the number between -3 to 3: ");
    scanf("%f", &x);
    if (x >= -3 && x <= 3)
    {
        y = x*(x + 1) + 1;
        printf("%.3f\n", y);
    }
    else
    {
        printf("wrong chooice\n");
    }
}