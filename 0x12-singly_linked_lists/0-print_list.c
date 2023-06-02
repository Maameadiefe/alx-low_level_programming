#include "main.h"
#include <stdio.h>

/**
 * print_list - this function will print all members of list_t
 * @h: list in list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t adf = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		adf++;
		h = h->next;
	}
	return (adf);
}
