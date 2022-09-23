#include "main.h"


/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: encoded string
 */
char *leet(char *s)
{{
	int a = 0, i;
	int low_letters[] = {'a', 'e', 'o', 't', 'l'};
	int upp_letters[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1'};

	while (s[a] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[a] == low_letters[i] || s[a] == upp_letters[i])
			{
				s[a] = numbers[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
}
