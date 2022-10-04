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
	int i, j; /* length of string */

	if (str == NULL)
		return (NULL);

	while (i = 0 && str[i] != '\0')
	{
		i++;
	}
	ds = (char *)malloc(i + 1 * sizeof(char)); /* memory for string */

	if (ds == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		ds[j] = str[j];
	}
	return (ds);
}
