#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to the pointer to head
  * @str: source string
  * Return: address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *target;

	if (head == NULL)
		return (NULL);

	target = malloc(sizeof(list_t));
	if (target == NULL)
		return (NULL);

	while (target != NULL)
	{
		target->str = strdup(str);
		target->len;
		target->next = NULL;

		target->next = *head;
		*head = target;
		return (*head);
	}
}




