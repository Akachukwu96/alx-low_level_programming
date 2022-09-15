#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: times to print diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int j;

	if (n >= 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
