#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: pointer to head
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n++; /* n = n + 1 */
		h = h->next;
	}
	return (n);
}


