#include "list.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @n: value to be added to new node
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new; /* initializing pointer to new node */
	listint_t *ptr; /* pointer to tranverse the list */

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	ptr = head;

	while (ptr->next != NULL)
		ptr = ptr->next /* updating pointer with the &next node */
	ptr->next = new;

	return (new);
}
