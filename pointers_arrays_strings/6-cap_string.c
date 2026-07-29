#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int cap = 0;

	while (str[cap])
	{
		while (!(str[cap] >= 'a' && str[cap] <= 'z'))
			cap++;

		if (str[cap - 1] == ' ' ||
		    str[cap - 1] == '\t' ||
		    str[cap - 1] == '\n' ||
		    str[cap - 1] == ',' ||
		    str[cap - 1] == ';' ||
		    str[cap - 1] == '.' ||
		    str[cap - 1] == '!' ||
		    str[cap - 1] == '?' ||
		    str[cap - 1] == '"' ||
		    str[cap - 1] == '(' ||
		    str[cap - 1] == ')' ||
		    str[cap - 1] == '{' ||
		    str[cap - 1] == '}' ||
		    index == 0)
			str[cap] -= 32;

		cap++;
	}

	return (str);
}
