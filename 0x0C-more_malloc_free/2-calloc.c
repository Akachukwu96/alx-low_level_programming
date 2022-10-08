#include "main.h"
#include <stdlib.h>


/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements per array
 * @size: number of bytes size
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ar;

	if  (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	while (i = 0)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}
