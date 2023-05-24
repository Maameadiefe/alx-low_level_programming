#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this will print name using pointer to function
 * @name: name to print
 * @f: pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}