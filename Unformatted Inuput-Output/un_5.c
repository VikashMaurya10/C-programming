// write a program to counting character, words and lines in text.
#include <stdio.h>
#include <string.h>

void main()
{
    char line[80], ctr;
    int i, c, end = 0, character = 0, words = 0, lines = 0;
    printf("Enter the text.\n");
    printf("Give space after each word.\n");
    printf("whan complete ,press 'RENURN'.\n\n");
    while (end == 0)
    {
        // reading a line of text.
        c = 0;
        while ((ctr = getchar()) != '\n')
        {
            line[c++] = ctr;
        }
        line[c] = '\0';
        // counting the words in a line
        if (line[0] == '\0')
        {
            break;
        }
        else
        {
            words++;
            for (i = 0; line[i] != '\0'; i++)
            {
                if (line[i] == ' ' || line[i] == '\t')
                {
                    words++;
                }
            }
        }
        // counting lines and character
        lines = lines + 1;
        character = character + strlen(line);
    }
    printf("\n");
    printf("Number of Lines =%d\n", lines);
    printf("Number of words =%d\n", words);
    printf("Number of characters =%d\n", character);
}