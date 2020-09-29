#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @s: string to be counted
 */

int _strlen(char *s)
{	
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}

	return(i);

}

/**
 * print_rev - prints a string backwards
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{	
	int i = _strlen(s);
	
	while(i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
