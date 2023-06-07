#include "lists.h"

/**
 * add_nodeint_end - This will add a new node at the end of listint_t
 * @head: pointer to the head of listint_t
 * @n: inputed value to the new node
 * Return: address of new element, or NULL if it fails
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adf, *m;

	adf = malloc(sizeof(listint_t));
	if (adf == NULL)
		return (NULL);
	adf->n = n;
	adf->next = NULL;
	if (*head == NULL)
	{
		*head = adf;
		return (adf);
	}
	m = *head;
	while (m->next != NULL)
		m = m->next;
	m->next = adf;
	return (adf);
}
