#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - beginning of a linked list a new node is added
 * @head: list_t list double pointer
 * @str: new string
 *
 * Return: new element address, or NULL 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
