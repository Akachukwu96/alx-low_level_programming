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
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		l = i + j;
	else
		l = i + n;
	s3 = malloc(sizeof(char) * l + 1);
	if (s3 == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s3[k] = s1[k];
		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
