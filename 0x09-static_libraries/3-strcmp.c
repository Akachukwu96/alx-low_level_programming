#include "main.h"


/**
 * _strcmp - compares two string
 * @s1: first string input
 * @s2: second string input
 * Return: +ve integer if >, -ve integer if <, 0 if ==
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
