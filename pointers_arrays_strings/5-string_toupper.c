#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @: string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; [i] != '\0'; i++)
	{
		if ([i] >= 'a' && [i] <= 'z')
		{
			[i] = [i] - 32;
		}
	}

	return ();
}
