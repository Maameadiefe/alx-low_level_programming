#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - splits string into two
 * @str: the string
 * Return: nothing
 */

int count_word(char *str)
{
	int dex = 0, len = 0;

	while (*(str + dex) && *(str + dex) != ' ')
	{
		len++;
		dex++;
	}

	return (len);
}

/**
 * count_words - count words contained in a string
 * @str; string to search
 * Return: nothing
 */

int count_words(char *str)
{
	int dex = 0, words = 0, len = 0;

	for (dex = 0; *(str + dex); dex++)
		len++;

	for (dex = 0; dex < len; dex++)
		
	{
		if (*(str + dex) != ' ')
		{
			words++;
			dex += word_len(str + dex);
		}
	}

	return (words);
}

/**
 * strtow - this will split a string into words
 * @str: the string to spliy
 * Return: nothing
 */

char **strtow(char *str)
{
	char **strn;
	int dex = 0, words, x, lett, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strn = malloc(sizeof(char *) * (words = 1));
	if (strn == NULL)
		return (NULL);

	for(x = 0; x < words; x++)
	{
		while (str[dex] == ' ')
			dex++;

		lett = word_len(str + dex);

		strn[x] = malloc(sizeof(char) * (lett + 1));

		if(strn[x] == NULL)
		{
			for (; x >= 0; x--)
				free(strn[x]);

			free(strn);
			return(NULL);
		}

		for (y = 0; y < lett; y++)
			strn[x][y] = str[dex++];

		strn[x][y] = '\0';
	}
	strn[x] = NULL;

	return (strn);
}
