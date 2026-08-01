#include "main.h"
#include <stdio.h>

/**
 *main - Main Header file
 *@argc: number of commands lines
 *@argv: numbers of arrays strings
 *
 * Return: the numbers of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d", i, argv[i]);
		}
		printf("%d", argc - 1 );
	}
	printf("\n");
	return (0);
}
