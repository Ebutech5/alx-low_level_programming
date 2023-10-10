#include "dog.h"

/**
 * free_dog - function that frees dog
 * @d: struct to dog to free
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
		d = NULL;
	}
}
