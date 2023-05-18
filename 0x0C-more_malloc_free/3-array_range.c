#include "main.h"
#include <stdlib.h>

/**
 * array_range -This function is an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: pointer
 * if min > max, return NULL
 * if malloc fails, return NULL
 */


int *array_range(int min, int max)
{
	int *ptr, b;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (b = 0; min <= max; b++, min++)
		ptr[b] = min;
	return (ptr);
}
