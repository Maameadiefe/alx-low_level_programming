#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this will displays numbers
 * @separator: string between the printed numbers
 * @n: number of integers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list adf;
	unsigned int x;

	va_start(adf, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(adf, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(adf);
}
