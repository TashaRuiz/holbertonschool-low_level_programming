#include "main.h"
/**
 *_strlen_recursion - return the length of a string
 *@s: the measure of a string
 *
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;

	return(1 + _strlen_recursion(s + 1));
}
