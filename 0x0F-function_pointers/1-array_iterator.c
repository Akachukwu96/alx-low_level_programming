#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: array to be executed
 * @size: size of array
 * action: pointer to the function to be called
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;
	if (array && action)
		for (s = 0; s < size; s++)
	if (array[s] && action)
	action(array[s]);
}
