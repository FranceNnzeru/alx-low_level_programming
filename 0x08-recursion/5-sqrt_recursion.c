#include "main.h"

/**
 * find_sqrt - finds the natural square rot of a number
 * @n: the number to find the sqarre root from
 * @r:sqare root to be tested
 * return: -1 if  no natural sqrt, r if natural sqrt
 */
int find_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if ( r == n / 2)
		return (-1);
	return (find_sqrt(n, r + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the sqrt of
 *
 * return: root if natural sqrt, -1 if no natural sqr
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
