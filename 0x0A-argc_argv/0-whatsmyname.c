#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to prints its name
 * @argc: arguments supplied to the program
 * @argv: an array of strings
 * Result: Always 0 (Success)
 */
int main(int argc _attribute_((unused)), char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}
