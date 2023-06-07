#include "lists.h"

/**
 * free_listint - This will free listint_t
 * @head: pointer to the head of listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head != NULL)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
