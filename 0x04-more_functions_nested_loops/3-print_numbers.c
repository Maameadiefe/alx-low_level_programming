#include "main.h"

/**
 * print_numbers - Print numbers between 0 and 9
 * Return: The numbers between 0 and 9
 */

void print_numbers(void)

{
	int y;

	for (y = 0; y <= 9; y++)
	{
	_putchar(y + '0');
	}
	_putchar('\n');
}
