#include "main.h"

int _strlen_recursion(char *s);
int confirm_is_palindrome(char *s, int i, int j);

/**
 * _strlen_recursion - checks the length of a string
 * @s: string input
 *
 * Return: length of the string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s) + 1);
}

/**
 * confirm_is_palindrome - checks if a string is palindrome
 * @s: string input
 * @i: smaller iterator that increases to give length of string
 * @j: bigger iterator that decreases to give length of string in reverse
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int confirm_is_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (confirm_is_palindrome(s, i + 1, j - 1));
	return (0);
}

/**
 * is_palindrome -checks if a string is a string is a palindrome
 * @s: string to be checked
 *
 * Return: if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (confirm_is_palindrome(s, 0, _strlen_recursion(s)));
}
