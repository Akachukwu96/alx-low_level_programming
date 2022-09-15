#include "main.h"


/**
 * print_numbers - prints numbers 0 to 9 followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	while (c >= 48 && c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
