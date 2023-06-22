#include "main.h"

/**
 * print alphabet  - print all alphabet in lowecase
*/

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

