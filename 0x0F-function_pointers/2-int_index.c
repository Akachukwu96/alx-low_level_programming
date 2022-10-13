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
	unsigned int s;
	int i;

	if (array && cmp)
		for (s = 1; s < size; s++)
		{
			for (i = 0; i <= s; i++)
			{
				cmp(array[s]);
				return (i);
			}
			else
			{
				(i == NULL);
				return (-1);
			}
		}
		return (-1);
}
