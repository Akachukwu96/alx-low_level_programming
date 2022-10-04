#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or pointer to a newly allocated space in memory
 * which contains the contents of s1, s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, d = 0;
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
	d = i + j;
	s3 = (char *)malloc(sizeof(char) * d + 1);

	if (s3 == NULL)
		return (NULL);

	j = 0;

	while (k < d)
	{
		if  (k <= i)
		{
			s3[k] = s1[k]; /* assign s1 to s3 */
		}
		if (k >= i)
		{
			s3[k] = s2[j]; /* assign s2 to s3 */
			j++;
		}
		k++;
	}
	s3[k] = '\0'; /* assign null terminator to end of string */
	return (s3);
}
