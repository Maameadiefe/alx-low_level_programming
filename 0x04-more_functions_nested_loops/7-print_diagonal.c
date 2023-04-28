#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @n: The number of times to print diagonally
 * Return: empty
 */

void print_diagonal(int n)

{
	int w, y;

	if (n <= 0;)
	{
	_putchar('\n');
	}
	else
	{
	for (w = 0; w < n; w++)
	{
	for (y = 0; y < w; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
