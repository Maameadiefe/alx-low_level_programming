#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen;
	}
}
