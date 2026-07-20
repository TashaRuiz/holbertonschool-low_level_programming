#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num;
	char alf;

	for (num = 0; num < 10; num++)
	{
		for (alf = 'a'; alf <= 'z'; alf++)
		{
			_putchar(alf);
		}
		_putchar('\n');
	}
}
