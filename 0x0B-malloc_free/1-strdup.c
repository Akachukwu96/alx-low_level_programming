#include "main.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: pointer to string
 * Return: pointer to the duplicated string or NULL if insufficient memory
 * is available.
 */
char *_strdup(char *str)
{
	char *s;
	char *ds; /* pointer to duplicate string */
	int len; /* len is length of string */

	s = malloc(len * sizeof(str)); /* memory for string */

	if (s == NULL)
		return (NULL);

	ds = s; /* assigns or copies s to ds */
	while (*str)
	{
		*ds = *str;
		ds++;
		str++;
	}
	*ds = '/0'; /* assigns null terminator to ds */
	return (s);
}
