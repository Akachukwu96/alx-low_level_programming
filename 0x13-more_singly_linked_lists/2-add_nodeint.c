#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: head of list
  * @n: value of data
  *
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next;
		new->next = *head; /* linking new to first node head = &first node */
		*head = new; /* linking head to point to new */
		return (new);
	}
}


