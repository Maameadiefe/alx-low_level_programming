#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - two strings are concatenated
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (n > y)
		n = y;
	s = malloc((i + n + 1) * sizeof(char));
	if (s == NULL)
		return (0);
	for (z = 0; z < i; z++)
	{
		s[z] = s1[z];
	}
	for (; z < (i + n); z++)
	{
		s[z] = s2[z - i];
	}
	s[z] = '\0';
	return (s);
}
