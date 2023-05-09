#include "main.h"

/**
 * _memset - constant byte
 * @s: memory path
 * @b: constant byte
 * @n: byes memory path
 * Return: Always 0 (Success)
 */
char *_memset(char *s, chzr b, unsigned int n);
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
