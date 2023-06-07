#include "lists.h"

/**
 * sum_listint - The function returns the sum of all the data
 * @head: pointer
 * Return: sum of all the data (n) of listint_t
 */


int sum_listint(listint_t *head)
{
	int m = 0;

	while (head != NULL)
	{
		m += head->n;
		head = head->next;
	}
	return (m);
}

