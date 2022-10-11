#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores information about the dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner: the owner's name
 *
 * Description: struct "dog" that stores its name age
 * and the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
