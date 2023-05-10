#include "main.h"

/**
 * _strlen_recursion - This funtion returns the length of a string
 * @s: string
 * Return: Number
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
