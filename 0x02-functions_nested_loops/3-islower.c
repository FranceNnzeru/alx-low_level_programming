#include "main.h"

/**
 * islower - checks if a character is in lowercase or not
 * @c - the character to be checked
 *
 * Return: 1 if its in lowecase
 * Return: 0 if its not in lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
