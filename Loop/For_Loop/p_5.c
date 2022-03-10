//Find the sum of alternate series 1 to n.
// 1-2+3-4......+n
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
            printf("-%d", i);
        }
        else
        {
            sum += i;
            printf("+%d", i);
        }
    }
    printf("\n\aTotal sum of series is: %d\n", sum);
}