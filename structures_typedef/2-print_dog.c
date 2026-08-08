#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - print the information of the dog that has been receive
 *@d: the pointer of the dog structure
 *
 *Return: nothing if there is no information
 */
void print_dog(struct dog *d);
{
	if (d == NUll)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
