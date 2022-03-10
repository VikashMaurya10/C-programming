// Print date by using struture.
#include <stdio.h>
struct date
{
    int day, month, year;
} x = {20, 2, 3030};
void main()
{
    printf("%d/%d/%d\n", x.day, x.month, x.year);
}
