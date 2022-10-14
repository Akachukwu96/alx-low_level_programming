#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum of all its parameters
 * @n: count of all the parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list numbers; /* named the list numbers */
	int i, sum;

	va_start(numbers, n); /* Initialize the argument list */
	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(numbers, int); /* the next arg after n */

	va_end(numbers);
	return (sum);
}

