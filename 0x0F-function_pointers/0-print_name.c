#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name on pointer to function
 * @name: name to be printed
 * @f: pointer to function that print a name
 * Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

