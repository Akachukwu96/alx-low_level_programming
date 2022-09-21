#include "main.h"


/**
 * strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be used from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + n + 1] = '\0';

	return (dest);
}
