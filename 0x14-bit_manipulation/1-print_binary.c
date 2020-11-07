#include "holberton.h"

/**
 * print_binary - prints a decimal number to binary;
 * @n: number to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int k;

	if (!n)
		_putchar('0');

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k)
		{
			if (k & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
