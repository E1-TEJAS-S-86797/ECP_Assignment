#include <stdio.h>
void printing_char (char ch, int numberOfChars, int numberOfLines);

int main (void)
{
    char userChar;
    int lines,times;
    printf ("please enter a character, number of times in a line, and number of lines:\n");
    while ((scanf ("%c%d%d", &userChar, &times, &lines)) == 3)
    {
        printing_char (userChar, times, lines);
    }
    return 0;
}

void printing_char (char ch, int numberOfChars, int numberOfLines)
{
    int x;
    int y = 0;

    while (++y <= numberOfLines)
    {
            for (x = 0; x<numberOfChars; x++)
            {
                printf ("%c", ch);
            }
            printf ("\n");
    }
}
