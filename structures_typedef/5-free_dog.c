#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_dog - frees a dog
 *@d: a pointer to a dog to free
 *
 *Return: return nothing if no information
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
