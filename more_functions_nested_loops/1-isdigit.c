#include "main.h"

/**
 *_isdigit - checks for digitals (0 through 9)
 *@c: is the character to check
 *
 * Return: 1 if its digit, 0 otherwise
 */

int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
