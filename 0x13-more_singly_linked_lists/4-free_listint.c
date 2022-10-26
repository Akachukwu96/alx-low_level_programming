#include "lists.h"


/**
  * free_listint -  function that frees a listint_t list
  * @head: head of the list to br freed
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head; /* saving head in a tmp variable */
		head = head->next; /* head points to the next node */
		free(temp);
	} /* loop contines iteratively tilllast node head == NULL */
	free(head);
}
