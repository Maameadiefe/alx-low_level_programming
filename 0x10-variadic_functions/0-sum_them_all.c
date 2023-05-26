#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this will return the sum of all its parameters
 * @n: arguments passed to this function
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list adf;
	unsigned int x, sum = 0;

	if  (n == 0)
	{
		return (0);
	}
	va_start(adf, n);
	for (x = 0; x < n; x++)
		sum += va_arg(adf, int);
	va_end(adf);
	return (sum);
}
