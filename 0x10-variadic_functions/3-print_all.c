#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - this will display anything
 * @format: list arguments passed to this function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *car, *y = "";
	va_list adf;

	va_start(adf, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", y, va_arg(adf, int));
					break;
				case 'i':
					printf("%s%d", y, va_arg(adf, int));
					break;
				case 'f':
					printf("%s%f", y, va_arg(adf, double));
					break;
				case 's':
					car = va_arg(adf, char *);
					if (car == NULL)
						car = "(nil)";
					printf("%s%s", y, car);
					break;
				default:
					x++;
					continue;
			}
			y = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(adf);
}
