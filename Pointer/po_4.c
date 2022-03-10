//write a program to find the length of string by strlen function.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int stringlen(char *);

int main()
{
    char str[40];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = stringlen(str);
    printf("The length of string %s is: %d\n", str, len);
    getch();
    return 0;
}
int stringlen(char *s)
{
    return (strlen(s));
}