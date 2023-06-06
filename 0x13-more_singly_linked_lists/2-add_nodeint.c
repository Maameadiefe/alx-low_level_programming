#include "lists.h"

/**
 * add_nodeint - This will add a new node at the start of listint_t
 * @head: pointer to the head of listint_t
 * @n: inputed value to be added to new node
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adf;

	adf = malloc(sizeof(listint_t));
	if (adf == NULL)
		return (NULL);
	adf->n = n;
	adf->next = *head;
	*head = adf;
	return (adf);
}
