#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for uppercase characters
 *
 * @c: is the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
