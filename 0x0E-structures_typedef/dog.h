#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - define a new type element
 * @name: name of dog
 * @age: pointer to the size of dog
 * @owner: pointer to the name of owner
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
