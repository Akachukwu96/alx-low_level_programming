#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to the pointer to head
  * @str: source string
  * Return: address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *target; /* declaring pointer to new node */
	int i, count = 0;

	if (head == NULL)
		return (NULL);

	target = malloc(sizeof(list_t));
	/* creating memory for new node */

	if (target == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	
	target->str = strdup(str); /* duplicating str */
	target->len = i;

	target->next = *head; /* linking new node to address of first node */
	*head = target; /* linking head to new node */
	return (*head);
}




