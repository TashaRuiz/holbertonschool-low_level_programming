#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: String of arguments in array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
    }

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op(num1, num2));

	op = get_op_func(argv[2]);
	printf("%d\n", op(num1, num2));

	return (0);
}
