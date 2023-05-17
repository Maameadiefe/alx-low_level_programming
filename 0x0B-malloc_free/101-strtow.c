#include "main.h"
#include <stdlib.h>

/**
 * count_words - this will count number of words contained in a string
 * @x: string
 * Return: number of words
 */
int count_words(char *s)
{
	int w = 0, y = 0;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			w = 0;
		else if (w == 0)
		{
			w = 1;
			y++;
		}
	}
	return (y);
}
/**
 * **strtow - this will split a string  into words
 * @str: inputed string
 * Return: pointer to a string(success)
 * or NULL if not
 */
char **strtow(char *str)
{
	char **m, *n;
	int i, j = 0, len = 0, words, x = 0, k, z;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				z = i;
				n = (char *) malloc(sizeof(char) * (x + 1));
				if (n == NULL)
					return (NULL);
				while (k < z)
					*n++ = str[k++];
				*n = '\0';
				m[j] = n - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
			k = i;
	}
	m[j] = NULL;
	return (m);
}
