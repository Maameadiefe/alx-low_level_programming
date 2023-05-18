#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this funtions allocates memory
 * @b: The size of memory
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}

