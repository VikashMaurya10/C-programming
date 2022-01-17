//function with no arguments and return value.

#include <stdio.h>
int area(); /*Function prototype withe return value*/

int main()
{
    int square_area;
    square_area = area(); /*called function*/
    printf("Area of square=%d\n", square_area);
    return 0;
}
int area()
{
    int square_area, square_side;
    printf("Enter the side of square: ");
    scanf("%d", &square_side);
    square_area = square_side * square_side;
    return square_area;
}