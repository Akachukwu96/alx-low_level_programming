#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the value of the memory to be allocated
 *
 * Return: a pointer to the allocated memory if malloc fails, the
 * malloc_checked function should cause normal process termination with 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
