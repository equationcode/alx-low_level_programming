#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to print
 * @f: pointer to function
 *
 * Return: 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
