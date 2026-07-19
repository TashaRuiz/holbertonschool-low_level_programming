#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		if (alf != 'e' && alf != 'q')
			putchar(alf);
	}
	putchar('\n');

	return (0);
}
