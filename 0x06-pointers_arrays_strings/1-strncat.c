#include "main.h"


/**
 * _strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be used from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (src[j] != '\0' && j < n; j++;)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
