#include "main.h"

/**
 * _pow_recursion - This function returns the value of x ^ y
 * @x: the value to have a power of y
 * @y: the power of the integer
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
