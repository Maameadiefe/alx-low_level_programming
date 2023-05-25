#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this will display name to function using pointer
 * @name: input name
 * @f: input pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
