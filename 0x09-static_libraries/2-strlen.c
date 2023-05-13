#include "main.h"

/**
 * _strlen - returns the length of a string
 * @c: string
 * Return: the length
 */

int _strlen(char *c)
{
	int longi = 0;

	while (*c != '\0')

	{
		longi++;
		c++;
	}

	return (longi);
}
