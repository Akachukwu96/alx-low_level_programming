#include "main.h"


/**
 * _abs - a fuction that computes the absolute value of an integer
 * @x: integer input
 *
 * Return: Absolute value
 */
int _abs(int x)
{
	return (x * ((x > 0) - (x < 0)));
}
