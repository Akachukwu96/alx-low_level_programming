#include "main.h"


/**
 * _strchr - Locates a character in a string
 * @s: String input
 * @c: Character to be found
 *
 * Return:NULL if c is not found on string or (char *)s pointer
 * to the first occurence of c on the string s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (s[i] != '\0'; i++;)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return ('\0');
		}
	}
}
