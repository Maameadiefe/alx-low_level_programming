#include "lists.h"

/**
 * insert_nodeint_at_index -This will insert a new node to a given position.
 * @head: pointer
 * @index: index
 * @n: variable
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int m;
	listint_t *x = *head;
	listint_t *adf;

	if (index == 0)
	{
		adf = malloc(sizeof(listint_t));
		if (adf == NULL)
		{
			return (NULL);
		}
		adf->n = n;
		adf->next = *head;
		*head = adf;
		return (adf);
	}
	for (m = 0; m < index - 1 && x != NULL; m++)
	{
		x = x->next;
	}
	if (x == NULL)
	{
		return (NULL);
	}
	adf = malloc(sizeof(listint_t));
	if (adf == NULL)
	{
		return (NULL);
	}
	adf->n = n;
	adf->next = x->next;
	x->next = adf;
	return (adf);
}
