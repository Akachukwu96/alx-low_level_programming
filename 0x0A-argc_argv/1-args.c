#include <stdio.h>


/**
 * main - prints the number of arguments passed into it
 * @argc: count of arguments supplied to the program
 * @argv: an array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
