#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
		{
			printf("%s\n", d->name);
			printf("%f\n", d->age);
			printf("%s\n", d->owner);
		}
	}
}


