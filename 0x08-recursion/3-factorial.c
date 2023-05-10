#include "main.h"

/**
 * factorial - This untion returns the factorialof a given number
 * @n: the given number
 * Return: Value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
