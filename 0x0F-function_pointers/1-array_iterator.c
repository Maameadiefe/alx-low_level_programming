#include "function_pointers.h"

/**
 * array_iterator - this funtion will execute
 * @array: array of function
 * @size: elements to print
 * @action: pointer to print
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
