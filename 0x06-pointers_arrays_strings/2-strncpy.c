#include "main.h"


/**
 * _strncpy - copies a string
 * @dest:destination string
 * @src: string to be copied
 * @n: number of bytes to be copied from source
 *Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp;

	temp = dest;

	while (n-- && (*dest++ = *src++))

	return (temp);
}
