//Write a program to print structured date.
#include <stdio.h>
#include <conio.h>
struct date
{
    int day;
    int month;
    int year;
};
void main()
{
    struct date x;
    printf("Enter day: ");
    scanf("%d", &x.day);

    printf("Enter month: ");
    scanf("%d", &x.month);

    printf("Enter year: ");
    scanf("%d", &x.year);

    printf("Today date is %d/%d/%d\n", x.day, x.month, x.year);
}