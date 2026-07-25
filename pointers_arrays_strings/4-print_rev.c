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
	
	while (s[len] != '\0') // para restar el string del 9 hacia 0
		len--;

	while(len >= 0) // imprime la cantidad de string de 9 hacia 0
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
