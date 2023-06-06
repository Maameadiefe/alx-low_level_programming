#include "lists.h"

/**
 * listint_len - This will return the number of elements in listint_t
 * @h: pointer to the head of listint_t
 * Return: the number of elements in listint_t.
 */

size_t listint_len(const listint_t *h)
{
	size_t adf = 0;

	while (h != NULL)
	{
		adf++;
		h = h->next;
	}
	return (adf);
}
