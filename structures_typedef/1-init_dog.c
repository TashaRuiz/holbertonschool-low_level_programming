#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - initialies dog struct
 *@d: the pointer to the dog structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 * Return: if no information
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
