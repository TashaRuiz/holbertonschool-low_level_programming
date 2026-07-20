#include "main.h"
#include <ctype.h>

/**
 * _islower - check for lowercase characters
 *
 * @c: is the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
