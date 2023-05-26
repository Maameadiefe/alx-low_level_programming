#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -this wil displays string
 * @separator: string printed between the two strings
 * @n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list adf;
	char *car;
	unsigned int x;

	va_start(adf, n);
	for (x = 0; x < n; x++)
	{
		car = va_arg(adf, char*);
		if (car == NULL)
			printf("(nil)");
		else
			printf("%s", car);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(adf);
}

