#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this fxn that returns a pointer to a new string
 * @str: string to duplicate
 * Return: NULL
 */

char *_strdup(char *str)
{
	int x = 0;
	int y = 1;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}
	c = malloc((sizeof(char) * y) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	while (x < y)
	{
		c[x] = str[x];
		x++;
	}
	c[x] = '\0';
	return (c);
}

