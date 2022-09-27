#include "main.h"



/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing the list of characters to be matched
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
			return (len);
		}
	}
}

