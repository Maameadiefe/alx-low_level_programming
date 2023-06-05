#include <stdio.h>
#include "lists.h"

/**
 * print_list - This will displays all elements on the list_t.
 * @h: pointer to the list
 * Return: number of nodes on the list
 */

size_t print_list(const list_t *h)
{
	size_t adf = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		adf++;
	}
	return (adf);
}
