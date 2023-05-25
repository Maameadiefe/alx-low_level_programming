#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - displays each element of an array
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
