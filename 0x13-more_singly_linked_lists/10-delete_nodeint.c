#include "lists.h"

/**
 * delete_nodeint_at_index - This will delete the nodes at index
 * @head: pointer of first node
 * @index: indexx of node that should be deleted
 *Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *ptr;
	unsigned int m;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		n = *head;
		*head = n->next;
		free(n);
		return (1);
	}
	ptr = *head;
	n = (*head)->next;
	for (m = 1; m < index; m++)
	{
		if (n == NULL)
			return (-1);
		ptr = n;
		n = n->next;
	}
	ptr->next = n->next;
	free(n);
	return (1);
}
