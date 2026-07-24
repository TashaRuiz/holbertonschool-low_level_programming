#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 *
 * Return: Nothing
 */
void print_line(int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
