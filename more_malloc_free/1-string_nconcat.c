#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: maximum number of bytes
 *
 * Return: pointer to newly allocated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
