#include "main.h"

/**
 *_puts - prints a string follow by a new line
 *@str: pointer of string
 *
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
