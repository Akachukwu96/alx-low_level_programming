#include "main.h"


/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int a, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[a] == alphabet[j])
			{
				s[a] == rot13[j];
				break;
			}
		}
	}
	return (s);
}
