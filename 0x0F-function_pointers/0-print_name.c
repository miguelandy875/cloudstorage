#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - write name using pointer to function
 * @name: string to add
 * @p2f: pointer to function
 * Return: void
 **/
void print_name(char *name, void (*p2f)(char *))
{
	if (name == NULL || p2f == NULL)
		return;

	p2f(name);
}


