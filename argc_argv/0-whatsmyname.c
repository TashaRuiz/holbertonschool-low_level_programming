#include "main.h"
#include <stdio.h>

/**
 *main - Main Header
 *@argc: numbers of command lines
 *@argv: size of arrays of strings
 *
 * Return: the name of files
 */
int main(int argc, char *argv[])
{
	int i //i stand for index

	for (i = 1; i < argc; i++ )
	{
		printf ("%s", argv[i]);
	}
	printf("\n");
	return(0);
}
