// Number of occurrences of vowels, consonants,Words, spaces and special character in the given statments.
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void main()
{
    char s[100];
    system("cls");
    int vow = 0, con = 0, spac = 0, punc = 0, length = 0, i;
    printf("Enter the staments: ");
    gets(s);
    length = strlen(s);
    for (i = 0; i < length; i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vow++;
            }
            else
            {
                con++;
            }
        }
        if (isspace(s[i]))
        {
            spac++;
        }
        if (ispunct(s[i]))
        {
            punc++;
        }
    }
    printf("Number of words: %d\n", spac + 1);
    printf("Number of vowels: %d\n", vow);
    printf("Number of consonants: %d\n", con);
    printf("Number of spaces: %d\n", spac);
    printf("Number of spacial character: %d\n", punc);
    getch;
}