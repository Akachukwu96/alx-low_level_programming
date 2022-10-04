#include "main.h"


/**
 * _isdigit - checks for a digit 0 through 9
 * @c: single letter input to be checked
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
