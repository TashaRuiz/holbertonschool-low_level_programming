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
	argv[0] = 0;

	printf("%d", argc -1);
	printf("\n");

	return (0);
}
