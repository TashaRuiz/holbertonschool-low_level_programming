#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * '10' + (s[i] - '0');
			i++
			if (s[i] == '-')
			{
				sign *= -1;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				found = 1;
				break;
			}
		}
		i++;
	}

	if (!found)
		return (0);

	return (result * sign);
}
