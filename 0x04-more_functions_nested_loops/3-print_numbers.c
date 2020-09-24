#include "holberton.h"

/**
 * print_numbers - print numbers from 
 *
 * Return: result of the operation
 */
void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
