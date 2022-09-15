#include "main.h"


/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	_putchar('\n');
}
