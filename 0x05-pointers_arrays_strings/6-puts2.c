#include "holberton.h"

/**
 * puts2 - swaps the value of two integers
 *
 * @str: string to be counted
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
