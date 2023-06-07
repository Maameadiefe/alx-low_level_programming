#include "lists.h"

/**
 * print_listint - Displays the elements of a listint_t list.
 * @h: A pointer to the head of listint_t.
 *
 * Return: The number of nodes in listint_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t adf = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		adf++;
	}
	return (adf);
}

