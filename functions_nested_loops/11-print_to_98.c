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
		printf(%d,' ', num);
		num++;
		
		if (num == 98)
			break;
	}
	printf("98\n");
}
