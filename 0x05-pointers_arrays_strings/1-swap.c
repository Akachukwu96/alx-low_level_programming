nclude "main.h"


/**
 * swap_int - swaps the values of two integers
 * @a: input of first integer
 * @b: input of second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
