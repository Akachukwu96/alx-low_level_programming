#include "main.h"


/**
 * print_last_digit - a function that prints the last digit of a number
 * @x: number's last digit
 *
 * Return: last digit of number
 */
int print_last_digit(int x)
{
	int num;

	num = (x % 10);

	if (num < 0)
	{
		num = (-1 * num);
	}
	_putchar(num + '0');
	return (num);
}
