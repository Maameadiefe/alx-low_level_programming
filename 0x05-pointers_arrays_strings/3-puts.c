#include "main.h"

/**
 * _puts - prints a string and followed by a new line to stdout
 * @str: string to be print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
