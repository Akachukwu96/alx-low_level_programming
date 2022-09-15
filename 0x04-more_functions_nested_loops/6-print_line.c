#include "main.h"


/**
 * print_line - draws a straight line in terminal
 * @n: times straight line is printed
 * Return: void
 */
void print_line(int n)
{
	int j;

	if (n >= 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
