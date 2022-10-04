#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: size of array
 * @c: array to be created
 *
 * Return: Pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
