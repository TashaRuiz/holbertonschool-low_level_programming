#include "main.h"

/**
 *helper_sqrt - find natural square root recursion
 *@num: number to find the square root
 *@point: the current point where the root are
 *
 *Return: the natural square root or -1 if doesnt exists
 */

int helper_sqrt(int num, int point)
{
	if (point * point == num)
	{
		return (point);
	}
	else if (point * point > num)
	{
		return (-1);
	}
	return (helper_sqrt(num, point + 1));
}

/**
 *_sqrt_recursion - return the natural square root by a number
 *@n: the number to find the point of square root
 *
 *Return: the natural square root or -1 if doesnt exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return(helper_sqrt(n, 0));
}
