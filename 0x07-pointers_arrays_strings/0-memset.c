#include "main.h"

/**
 * _memset - fills memory with a constanstant byte
 * @s: Pointer to the memory area to be filled
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return s;
}
