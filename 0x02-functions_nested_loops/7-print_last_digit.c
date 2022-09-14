#include "main.h"


/**
 * print_last_digit - a function that prints the last digit of a number
 * @x: integer input
 *
 * Return: last digit of number
 */
int print_last_digit(int x)
{
	int num;

	num = (x % 10);
	_putchar(num);
	return (num);
}
