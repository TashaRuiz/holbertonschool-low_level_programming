#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num_esp;
	int num_car;

	while (dest[num_esp] != '\0' )
	{
		num_esp;
	}
	for (num_car = 0; num_car < n && src[num_car] !=0; num_car++)
	{
		dest[num_esp + num_car] = src[num_car];
	}
	return (dest);
}
