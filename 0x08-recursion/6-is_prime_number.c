#include "main.h"

/**
 * is_prime_number - checks if the input ineger is a prime number
 * @p: possible prime number
 * @chk: check
 * return: 1 if prime number, else 0
 */
int prime_check(int chk, int p)
{
	if ((p < 2) || (p % chk == 0))
		return (0);
	else if (chk > p / 2)
		return (1);
	else
		return (prime_check(chk + 1, p));
}

/**
 * is_prime_number - check if number is prime 
 * @n: number to check
 * return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
