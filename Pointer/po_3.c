// swappng of two values.
#include <stdio.h>
void swap(int *, int *);

void main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("The value of a and b after swap is %d and %d\n", a, b);
}
void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}