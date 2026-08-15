#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints the strings
 * @separator: Is the string to be printed between the strings
 * @n: Is the number of strings passed to the function
 *
 * Return: void, no need for
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;
	va_start (args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
	}
	va_end(args);
	printf("\n");
}
