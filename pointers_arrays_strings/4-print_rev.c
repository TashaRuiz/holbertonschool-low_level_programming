#include "main.h"

/**
 *print_rev - print a string in reverse
 *@s: pointer of string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	len = 0;
	
	while (s[len] != '\0')
		len--;

	while(len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
