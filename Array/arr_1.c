// Enter a matrix and find its Transpose, Addition with Transpose.
#include <stdio.h>

void main()
{
    int i, j, a[2][2], b[2][2], c[2][2];
    printf("Enter the Matrix Element in row wise\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your Maritx\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Transpose of Maritx\n");
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d", b[j][i]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Addition of these Maritx\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
