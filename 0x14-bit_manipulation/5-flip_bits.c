#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from unmber to another
 * @n: The first number
 * @m: The second number.
 *
 * Return: The number of bit needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
