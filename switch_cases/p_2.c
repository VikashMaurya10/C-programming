// write a program to convert number into words.
#include <stdio.h>
void main()
{
    int n, rev = 0, rev1, rev2, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        count += 1;
        n /= 10;
    }
    printf("Reverse Number is= %d\n", rev);
    printf("Number of digit is %d\n", count);
    if (rev <= 99 && rev >= 10)
    {
        rev1 = rev;
    }
    else
    {
        rev1 = rev / 10;
    }
    if (rev <= 9 && rev > 0)
    {
        rev2 = rev;
    }
    else
    {
        rev2 = rev1 / 10;
    }
    while (rev <= 999 && rev >= 100)
    {
        rev = rev % 10;
        switch (rev)
        {
        case 1:
            printf("One Hundared ");
            break;
        case 2:
            printf("Two Hundared ");
            break;
        case 3:
            printf("Three Hundared ");
            break;
        case 4:
            printf("Four Hundared ");
            break;
        case 5:
            printf("Five Hundared ");
            break;
        case 6:
            printf("Six Hundared ");
            break;
        case 7:
            printf("Seven Hundared ");
            break;
        case 8:
            printf("Eight Hundared ");
            break;
        case 9:
            printf("Nine Hundared ");
            break;
        }
        rev /= 10;
    }
    while (rev1 <= 99 && rev1 >= 10)
    {
        rev1 = rev1 % 10;
        switch (rev1)
        {
        case 1:
            printf("Ten ");
            break;
        case 2:
            printf("Twenty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 4:
            printf("Fourty ");
            break;
        case 5:
            printf("Fivety ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 9:
            printf("Ninety ");
            break;
        }
        rev1 /= 10;
    }
    while (rev2 <= 9 && rev2 > 0)
    {
        rev2 = rev2 % 10;
        switch (rev2)
        {
        case 0:
            printf("Zero \n");
            break;
        case 1:
            printf("One \n");
            break;
        case 2:
            printf("Two \n");
            break;
        case 3:
            printf("Three \n");
            break;
        case 4:
            printf("Four \n");
            break;
        case 5:
            printf("Five \n");
            break;
        case 6:
            printf("Six \n");
            break;
        case 7:
            printf("Seven \n");
            break;
        case 8:
            printf("Eight \n");
            break;
        case 9:
            printf("Nine \n");
            break;
        default:
            printf("Invaled");
            break;
        }
        rev2 /= 10;
    }
}
