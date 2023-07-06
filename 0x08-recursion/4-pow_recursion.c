#include "main.h"

/**
 * _pow_recursion - returns the value of a x to the power another y
 * @x: the value to return
 * @y: the power of the value
 * Return: -1 if x < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
