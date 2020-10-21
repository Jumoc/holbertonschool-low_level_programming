#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using another function.
 *
 * @name: name to be printed
 * @f: function that prints the name
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
