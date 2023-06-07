#include "lists.h"

/**
 * reverse_listint - This fxn will reverse listint_t
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *x = *head, *next = NULL;

	while (x != NULL)
	{
		next = x->next;
		x->next = p;
		p = x;
		x = next;
	}
	*head = p;
	return (*head);
}
