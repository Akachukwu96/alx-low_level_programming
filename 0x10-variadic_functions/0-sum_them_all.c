#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum of all its parameters
 * @n: count of all the parameters
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers; /* named the list numbers */
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);
	/* add th value of the arg after n to result */

	va_end(numbers);

	return (result);
}

