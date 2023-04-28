#include "main.h"

/**
 * print_square - Print squares according to n parameter
 * @n: The number of times to print
 * Return: empty
 */

void print_square(int n)

{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
