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
	char *ds; /* pointer to duplicate string */
	int len, j; /* len is length of string */

	if (str == NULL)
		return (NULL);

	while (len = 0 && str[len] != '\0')
	{
		len++;
	}
	ds = (char *)malloc(len + 1 * sizeof(char)); /* memory for string */

	if (ds == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		ds[j] = str[j];
	}
	return (ds);
}
