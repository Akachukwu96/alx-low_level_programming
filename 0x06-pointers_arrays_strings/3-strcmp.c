#include "main.h"


/**
 * _strcmp - compares two string
 * @s1: first string input
 * @s2: second string input
 * Return: 1 if >, -1 if <, 0 if ==
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[2])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
