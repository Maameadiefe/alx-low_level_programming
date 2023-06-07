#include "lists.h"

/**
 * pop_listint -This will delete the head node of listint_t
 * @head: pointer
 * Return: data of head node’s
 */

int pop_listint(listint_t **head)
{
	listint_t *m;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	m = *head;
	n = m->n;
	*head = (*head)->next;
	free(m);

	return (n);
}
