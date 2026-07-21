#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all numbers from num to 98
 * @num: is the starting number
 */

void print_to_98(int num)
{
	if  (num <= 98)
	{
		while (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
		
	}
	else
	{
		while (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("98\n");
}
