#include "main.h"

/*
 *swap_int -swaps the value of two integers
 *@a: pointer first integer
 *@b: pointer second integer
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
