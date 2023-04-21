#include "lists.h"

/**
 * sum_listint - sums all the data in the list
 * @head: pointer to the head
 * Return: returns the sum of all the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		temp = tmp->next;
	}
	return (sum);
}
