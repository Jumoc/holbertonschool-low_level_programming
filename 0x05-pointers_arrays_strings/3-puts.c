#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @s: string to be counted
 */

void _puts(char *str)
{	
	int i = 0;
	
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
