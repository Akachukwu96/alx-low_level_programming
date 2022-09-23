#include "main.h"


/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int a = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[a] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[a] == alphabet[i])
			{
				s[a] == rot13[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
