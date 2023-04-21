#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to the first node
 * @index: the position of the node in the list
 * Return: data of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int j = 0;

	tmp = head;
	while (j != index)
	{
		j++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
