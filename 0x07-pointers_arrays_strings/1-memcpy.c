#include "main.h"

/**
 * _memcpy - Entry level
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int x = n;

	for (; i < x; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
