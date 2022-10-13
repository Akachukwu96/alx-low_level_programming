#include "function_pointers.h"


/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: integer( index if success and -1 on failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (s = 0; s < size; s++)
		{
			if (cmp(array[s]))
				return (s);
		}
	}
	return (-1);
}
