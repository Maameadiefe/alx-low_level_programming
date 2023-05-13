#include "main.h"
/**
 * _islower - checking for lowercase character
 * @c: The character in focus
 * Return: 1 for lowercase c otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
