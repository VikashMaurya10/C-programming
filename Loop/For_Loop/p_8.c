//         *
//         ***
//         *****
//         *******
//         *********
//         *
//       ***
//     *****
//   *******
// *********
#include <stdio.h>
void main()
{
    int i, j, row, k = 0;
    printf("Enter the number: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - 1; j++)

        {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}