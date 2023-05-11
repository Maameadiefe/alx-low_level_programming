#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: number to find natural square root
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - calculates the natural square root of a number
 * @n: Number to calculte its natural square root
 * @i: iterate number
 * Return: natural square root
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
