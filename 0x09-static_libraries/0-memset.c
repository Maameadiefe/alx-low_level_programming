#include "main.h"

/**
 * _memset - this function fills a block of memory with a specific value
 * @s: memory to be filled
 * @b: value expected
 * @n:bytes to be changed
 * Return: changed array with value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
