#include "lists.h"

/**
 * free_listint_safe - This  frees listint_t
 * @h: pointer
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t adf = 0;
	listint_t *m;

	while (*h != NULL && (*h)->next >= *h)
	{
		m = *h;
		*h = (*h)->next;
		free(m);
		adf++;
	}
	if (*h != NULL)
	{
		m = *h;
		*h = NULL;
		free(m);
		adf++;
	}
	return (adf);
}

