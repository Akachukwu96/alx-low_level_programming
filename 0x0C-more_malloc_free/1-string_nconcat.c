#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: no of bytes to be concatenated fron the second string
 *
 * Return: pointer to new string or NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k, l;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	l = i + n;
	s3 = malloc(sizeof(char) * l + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < l; k++)
		if (k < i)
			s3[k] = s1[k];

	for (n = 0; n < j; n++)
	{
		if (n >= j)
		{
			s3[k] = s2[j];
			k++;
			j++;
		}
		s3[k] = s2[n];
		k++;
	}
	return (s3);
}
