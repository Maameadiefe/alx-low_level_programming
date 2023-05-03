#include "main.h"

/**
 * _puts - prints a string and followed by a new line to stdout
 * @abc: string to print
 */

void _puts(char *abc)
{
	while (*abc != '\0')
	{
		_putchar(*abc);
	}
		_putchar('\n');
}
