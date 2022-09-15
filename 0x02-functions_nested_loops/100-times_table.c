#include "main.h"


/**
 * print_times_table - a function that prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: nothing
 */
void print_times_table(int n)
{

	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				op = a * b;
				if (b == 0)
				{
					_putchar(op + '0');
				} else if (op < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(op + '0');
				} else if (op >= 10 && op < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((op / 10) + '0');
					_putchar((op % 10) + '0');
				} else if (op >= 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((op / 100) + '0');
					_putchar(((op / 10) % 10) + '0');
					_putchar((op % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
