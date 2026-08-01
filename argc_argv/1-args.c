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
	
	for (i = 0; i < argc; i++)
	{

		printf("%n", argc -1, argv[i]);
	}
	printf("\n");
	return (0);
}
