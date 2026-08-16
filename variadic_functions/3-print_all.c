#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - Prints a char type element from va_list.
 * @list: va_list passed to function.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, float));
}

void print_char(va_list list)
{
	printf("%c", va_arg(list, char));
}

void print_str(va_list list)
{
	char *s;
	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	unsigned int i, k;
	va_list print;
	char *var;

	check storage[] = {{ "c", print_char }, { "f", print_float }, { "s", print_str }, { "i", print_int }};

	i = 0;
	var = "";
	va_start(print, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		k = i % 4;

		if (storage[k].type[0] == format[i / 4])
		{
			printf("%s", var);
			storage[k].f(print);
			var = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
