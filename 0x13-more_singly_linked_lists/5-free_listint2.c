#include "lists.h"

/**
 * free_listint2 - This will free listint_t list and sets the head to NULL
 * @head: pointer to the head of listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;
	while (*head)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}
	*head = NULL;
}
