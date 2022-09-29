#include "main.h"

int natural_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number input
 *
 * Return: Result of square root of number or -1
 */
int _sqrt_recursion(int n)
{
	if  (n < 0)
		return (-1);
	return (natural_sqrt(n, 0));
}

/**
 * natural_sqrt - returns the natural square root of a number
 * @n: number input
 * @i: iterator
 *
 * Return: Result of square root of number
 */
int natural_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt(n, i + 1));
}
