#include <stdlib.h>
#include "lists.h"


/**
 * free_list - this will free linked list
 * @head: frees list_t list
 */

void free_list(list_t *head)
{
	list_t *m;

	while (head)
	{
		m = head->next;
		free(head->str);
		free(head);
		head = m;
	}
}
