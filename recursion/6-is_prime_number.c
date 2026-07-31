#include "main.h"

/**
 * check_prime - checks if n is divisible by divisor
 * @n: number to check
 * @divisor: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 2));
}
