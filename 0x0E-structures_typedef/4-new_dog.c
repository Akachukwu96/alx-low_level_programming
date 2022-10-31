#include "dog.h"
#include <stdlib.h>


/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the owner
  * Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare a pointer to new_dog and variables for string length */
	dog_t *rubby_dog;
	int namel = 0, ownerl, k;

	/* create space for new_dog */
	rubby_dog = malloc(sizeof(*rubby_dog));

	if (rubby_dog == NULL || !(name) || !(owner))
	{
		free(rubby_dog);
		return (NULL);
	}

	while (name[namel] != '\0')
		namel++;

	for (ownerl = 0; owner[ownerl]; ownerl++)
		;
	/* Line 24 same as 27 if you initialize variable to 0 use 24 else 27 */

	/* create apace for name and owner to store a copy of each */
	rubby_dog->name = malloc(namel + 1);
	rubby_dog->owner = malloc(ownerl + 1);

	if (!(rubby_dog->name) || !(rubby_dog->owner))
	{
		free(rubby_dog->name);
		free(rubby_dog->owner);
		free(rubby_dog);
		return (NULL);
	}

	/* copy string to new string tranversing with k */
	for (k = 0; k < namel; k++)
		rubby_dog->name[k] = name[k];
	rubby_dog->name[k] = '\0';

	rubby_dog->age = age;

	for (k = 0; k < ownerl; k++)
		rubby_dog->owner[k] = owner[k];
	rubby_dog->owner[k] = '\0';

	return (rubby_dog);
}
