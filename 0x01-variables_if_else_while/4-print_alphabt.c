#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char l;


	l = 'a';
	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
}
