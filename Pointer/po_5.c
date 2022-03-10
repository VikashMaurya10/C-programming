//write a program to find the length of string by using Pointer.

#include <stdio.h>
int string_Length_Using_Pointer(char *);

int main()
{
    char str[100];
    int len;

    printf("\nEnter string : ");
    gets(str);

    len = string_Length_Using_Pointer(str);
    printf("The length of the string: %s is: %d\n", str, len);
    return 0;
}

int string_Length_Using_Pointer(char *p) /* p=&str[0] */
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}