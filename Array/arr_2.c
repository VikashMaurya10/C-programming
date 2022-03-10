// Enter a matrix and find its Transpose, Addition with Transpose and Multipliation with Transpose.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, c;
    system("cls");
    printf("Enter the number of row\n");
    scanf("%d", &r);
    printf("Enter the number of column\n");
    scanf("%d", &c);
    int i, j, n, a[r][c], b[r][c], C[r][c];
    printf("Enter the Matrix Element in row wise\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your Maritx\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Transpose of Maritx\n");
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            printf("%d", b[j][i]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Addition of these Maritx\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j] = a[i][j] + b[i][j];
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Multipliation of these Maritx\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j] = 0;
            for (n = 0; n < 2; n++)
            {
                C[i][j] += a[i][n] * b[n][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}