#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node
 * @head: pointer
 * @index: index
 * Return: the nth node of listint_t linked
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;
	listint_t *n = head;

	for (m = 0; m < index && n != NULL; m++)
	{
		n = n->next;
	}
	if (m == index && n != NULL)
	{
		return (n);
	}
	else
	{
		return (NULL);
	}
}
