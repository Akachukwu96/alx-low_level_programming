#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *target;
	unsigned int i;

	target = malloc(sizeof(list_t));
	if (target == NULL)
		return (NULL);

	while (str[i])
		i++;

	target->str = strdup(str);
	target->len = i;
	target->next = (*head);
	(*head) = target;

	return (*head);
}
