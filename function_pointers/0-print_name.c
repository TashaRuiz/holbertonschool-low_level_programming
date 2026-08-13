#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - print the name
 *@name: name to be printed
 *@f: function pionter
 *
 *Return: void
 */
void print_name(char *name, viod (*f)(char *))
{
	(*f)(name);
}
