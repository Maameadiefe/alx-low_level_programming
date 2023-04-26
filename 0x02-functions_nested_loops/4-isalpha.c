#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: the character in focus
 * Return: 1 for alphabets and 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c <= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
