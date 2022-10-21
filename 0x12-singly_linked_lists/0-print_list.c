#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: struct
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int num = 0;

	while (h->str != NULL)
	{
		if (h->str == NULL)
		{
			printf("%d %s\n", 0, "(nil)");
		}
		else
		{
			printf("%d %s\n", h->len, h->str);
		}
		h = h->next;
		printf("%d %s\n", h->len, h->str);
		num++;
	}
	return (num);
}
