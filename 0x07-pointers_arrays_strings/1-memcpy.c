#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: mem where stored
 * @src: mem where copied
 * @n: bytes
 * Return: copied mem with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
