#include "lists.h"


/**
 * find_listint_loop - This will find the loop in a linked list
 * @head: pointer
 * Return: address of the node of start of the loop starts,
 * or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head, *y = head;

	while (x && y && y->next)
	{
		x = x->next;
		y = y->next->next;

		if (x == y)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				x = x->next;
			}
			return (x);
		}
	}
	return (NULL);
}
