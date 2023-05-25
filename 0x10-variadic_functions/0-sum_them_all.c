#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this will return the sum of all its parameters
 * @n: arguments passed to this function
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if  (n == 0)
		return (0);
	int sum = 0;
	va_list adf;

	va_start(adf, n);

	for (unsigned int x = 0; x < n; x++)
	{
		sum += va_arg(adf, int);
	}

	va_end(adf);
	return (sum);
}
