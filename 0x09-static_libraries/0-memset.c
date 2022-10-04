#include "main.h"


/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the block of memory to fill
 * @b: The value to be set
 * @n: The number of bytes to be set
 * Return: A pointer to the area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
