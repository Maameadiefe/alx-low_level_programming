#include "main.h"

/**
 * _strncat - this function concatenate two string using n bytes from src
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int b;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (b < n && src[b]  != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
