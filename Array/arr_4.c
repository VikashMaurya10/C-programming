// Arrenge arrry element in ascending order
#include <stdio.h>
void main()
{
    int i, j, a[5], temp;
    printf("Enter the Matrix Element in row wise\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}
