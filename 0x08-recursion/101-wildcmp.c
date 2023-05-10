#include "main.h"

/**
 * _strlen_recursion - returns a string length
 * @s: string in question
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares character of a string
 * @s: string
 * @n1: small iterator.
 * @n2: large iterator.
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 +1, n2 - 1));
	}
	return (0);
}
