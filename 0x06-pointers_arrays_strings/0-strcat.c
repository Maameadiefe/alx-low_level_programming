#include "main.h"
#include <stdio.h>


/**
 * _strcat - This function concatenates two strings
 * @dest: string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}

	dest[i] = '\0';
	return (dest);
}
