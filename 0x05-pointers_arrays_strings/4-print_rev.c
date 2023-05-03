#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @c: String
 * Return: 0
 */

void print_rev(char *c);
{
	int longi = 0;
	int o;

	while (*c != '\0')
	{
		longi++;
		c++;
	}
	c--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*c);
		c--;
	}
		_putchar('\n');
}
