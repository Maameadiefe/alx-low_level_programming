#include "lists.h"

/**
 * print_listint_safe - This will print a linked list safely
 * @head: pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t adf = 0;
	const listint_t *x = head, *loop_start = NULL;

	while (x != NULL)
	{
		printf("[%p] %dn", (void *)x, x->n);
		adf++;
		if (x > x->next || x == loop_start)
		{
			printf("-> [%p} %dn", (void *)x->next, x->next->n);
			break;
		}
		if (x == head && x->next != NULL)
		{
			loop_start = x;
		}
		x = x->next;
	}
	if (x == NULL)
	{
		return (adf);
	}
	else
	{
		exit(98);
	}
}
