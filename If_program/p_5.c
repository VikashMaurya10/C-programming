//Find year is a leep year.
#include <stdio.h>
void main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leep year.\n", year);
    }
    else
    {
        printf("%d is not a leep year.\n", year);
    }
}