#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -This will add a new node at the end
 * @head: double pointer
 * @str: inputed string
 * Return: element address, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m;
	list_t *n = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	m = malloc(sizeof(list_t));
	if (!m)
		return (NULL);
	m->str = strdup(str);
	m->len = len;
	m->next = NULL;
	if (*head == NULL)
	{
		*head = m;
		return (m);
	}
	while (n->next)
		n = n->next;
	n->next = m;
	return (m);
}
