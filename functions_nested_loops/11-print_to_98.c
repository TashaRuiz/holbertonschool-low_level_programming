#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all numbers from num to 98
 * @num: is the starting number
 */

void print_to_98(int num)
{
	while (num <= 98)
	{
		if (num == 98)
		{
			break;
		}
		
		else
		{
			printf(%d, ", num);
			num++;
		}
	}
	printf("98\n");
}
