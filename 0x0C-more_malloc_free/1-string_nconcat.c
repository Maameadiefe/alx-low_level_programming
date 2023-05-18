#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this funtion concatenates two strings
 * @s1: first string for concatenation
 * @s2: second string for concatenation
 * @n: bytes
 * Return: Nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, w = 0;
	char *str;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[x])
		x++;
	
	while (s2[z])
		z++;

	if (n >= z)
		w = x + z;
	else
		w = x + n;

	str = malloc(sizeof(char) * w + 1);
	if ( str == NULL)
		return (NULL);

	z = 0;
	while (y < w)
	{
		if (y <= x)
			str[y] = s1[y];

		if (y >= x)
		{
			str[y] = s2[z];
			z++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
