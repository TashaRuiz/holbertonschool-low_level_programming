#include "function_pointers.h"
/**
 *print_name - print the name
 *@name: name to be printed
 *@f: function pionter
 *
 *Return: void print_name
 */
void print_name(char *name, viod (*f)(char *))
{
	(*f)(name);
}
