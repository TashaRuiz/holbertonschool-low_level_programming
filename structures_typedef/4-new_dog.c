#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - creating a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 *Return: the pointer for the new dog or NULL if no information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	unsigned int a, b, c;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	new->name = malloc(a * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		new->name[c] = name[c];
	new->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	new->owner = malloc(b * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		new->owner[c] = owner[c];
	return (new);
}
