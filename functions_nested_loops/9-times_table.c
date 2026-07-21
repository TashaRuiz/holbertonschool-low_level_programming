#include "main.h"

/**
 *times_table - Prints 9 times tables, starting with 0
 */

void times_table(void)
{
	int row, colm, num;
	 
	for (row = 0; row <= 9; row++)
	{
		for (colm = 0; colm <= 9; colm++)
		{
			num = row * colm;

			if (colm == 0)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (num < 10)
				{
					_putchar(' ');
					_putchar(num + '0');
				}
				else
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
