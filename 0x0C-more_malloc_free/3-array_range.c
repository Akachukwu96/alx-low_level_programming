#include "main.h"
#include <stdlib.h>


/**
 *array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	/* size of array = max range - min range + 1 */

	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
