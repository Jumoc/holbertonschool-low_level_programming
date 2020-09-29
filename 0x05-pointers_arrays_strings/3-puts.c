#include "holberton.h"

/**
 * _puts - swaps the value of two integers
 *
 * @str: string to be counted
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
