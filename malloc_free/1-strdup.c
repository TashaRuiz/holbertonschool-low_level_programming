#include "main.h"
#include <stdio.h>
#include <stlib.h>

/**
 *_strdup - return a pointer to a duplicated string
 *@str: a string to duplicate
 *
 *Return: pointer to duplicate a string, or NULL if string is NULL
 *or memory allocation is fails.
 */
char *_strdup(char *str)
{
	char *dupl;
	int i;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != "\0")
	{
		size++
	}

	dupl = malloc((size + 1) * sizeof(char));

	if (dupl == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dupl[i] = str[i];
	}
	return (dupl);
}
