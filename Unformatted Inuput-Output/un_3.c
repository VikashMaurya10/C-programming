// Write a program to read and print a character.
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main()
{
    char s;
    // system("cls");
    printf("Enter the char. Enter $ to exit....\n");
    while (s != '$')
    {
        s = getchar();
        printf("Entered char is:");
        putchar(s);
        printf("\n");
    }
}