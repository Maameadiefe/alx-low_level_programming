#include <stdlib.h>
#include "lists.h"
/**
 * list_len - this will return number of elements in a linked list
 * @h: pointer
 * Return: elements of h
 */

size_t list_len(const list_t *h)
{
	size_t adf = 0;

	while (h)
	{
		adf++;
		h = h->next;
	}
	return (adf);
}

