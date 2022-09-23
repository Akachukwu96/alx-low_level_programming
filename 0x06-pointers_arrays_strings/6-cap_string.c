#include "main.h"


/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int a, i;

	char sep_words[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 97 && s[a] <= 122)
			s[a] -= 32;

		for (i = 0; i < 13; i++)
		{
			if (s[a] == sep_words[i])
			{
				if (s[a + 1] >= 97 && s[a + 1] <= 122)
				{
					s[a + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
