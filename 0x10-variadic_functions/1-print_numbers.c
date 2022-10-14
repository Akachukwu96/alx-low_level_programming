#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n); /*Initializing it */

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *); /*next arg */

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
