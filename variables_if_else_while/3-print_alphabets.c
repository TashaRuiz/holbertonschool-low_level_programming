#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char alf;

	alf = 'a';
	while (alf <= 'z')
	{
		putchar(alf);
		alf++;
	}

	alf = 'A';
	while (alf <= 'Z')
	{
		putchar(alf);
		alf++;
	}

	putchar('\n');

	return (0);
}
