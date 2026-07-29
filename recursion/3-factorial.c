#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);

	else if (num == 0)
		return (1);

	else
		return (num * factorial(num - 1));
}
