#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array and initializes to zero
 *@nmemb: number of elements
 *@size: size of each element
 *
 * Return: a pointer to allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
