#include "main.h"


/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + a) >= 97 && *(s + a) <= 122)
		*(s + a) -= 32;
	/* *(s + a) is a pointer to s[a] */
	a++;

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + a) == sep_words[i])
			{
				if ((*(s + a) >= 97 && *(s + a) <= 122))
				*(s + a) -= 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
