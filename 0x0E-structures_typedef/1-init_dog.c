#include "dog.h"

/**
 * init_dog - function that initialize a variable
 * @d: pointer to dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to the owner of the dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
