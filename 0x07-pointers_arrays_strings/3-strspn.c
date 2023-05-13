#include "main.h"

/**
 * _strspn - Entry level
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, pack, value;

	pack = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		value = 0;

		for (n = 0; accept[n] != '\0'; n++)

			if (accept[n] == s[i])
			{
				pack++;
				value = 1;
			}
	}
}
