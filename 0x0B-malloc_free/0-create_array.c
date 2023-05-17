#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - this fxn creates array of chars and initialize with char
 * @c: address of char memory
 * @size: size of memory
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
