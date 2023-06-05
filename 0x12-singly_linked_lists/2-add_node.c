#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This will add a new node at the beginning of a linked test
 * @head: double pointer
 * @str: new inputed string
 * Return: the new element address, or NULL if not
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	unsigned int len = 0;

	while (str[len])
		len++;
	m = malloc(sizeof(list_t));
	if (!m)
		return (NULL);
	m->str = strdup(str);
	m->len = len;
	m->next = (*head);
	(*head) = m;
	return (*head);
}
