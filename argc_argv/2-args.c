#include "main.h"
#include <stdio.h>

/**
 *main - Main Header
 *@argc: number of command lines
 *@argv: size of arrays of strings
 *
 *Return: the number of the string
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
