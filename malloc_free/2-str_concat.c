#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings into a newly allocated memory space.
 *@s1: fisrt string
 *@s2: second string
 *
 * Return: a pointer to the newly allocated concatenated string
 * or NULL if the memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, p;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] )
	{
		len2++
	}
	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[1];
	}
	for (p = 0; p < len2; p++)
	{
		str[p] = s2[p];
	}
	str[i + p] = '\0';
	return (str);
}
