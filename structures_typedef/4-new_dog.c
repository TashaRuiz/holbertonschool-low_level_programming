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
	dog_t *dog;
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
