#include "main.h"


/**
 * _strstr -  locates a substring.
 * @haystack: string input
 * @needle: string to be looked for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *bhaystack = haystack;
		char *sneedle = needle;

		while (*sneedle != '\0' && *bhaystack == *sneedle)
		{
			bhaystack++;
			sneedle++;
		}
		if (*sneedle == '\0')
			return (haystack);
	}
	return (0);
}
