#include "holberton.h"

/**
 * print_number - applies rot13 letter substitution
 *
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int count = 0, i = 0, j = 0;
	int aux = n, auxCount = 0, mod;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	while (aux != 0)
	{
		aux /= 10;
		count++;
	}
	auxCount = count;
	if (n < 0)
		_putchar('-');
	while (i < count)
	{
		aux = n;
		j = 0;
		while (j < auxCount - 1)
		{
			aux = aux / 10;
			j++;
		}
		mod = aux % 10;
		if (mod < 0)
		{
			mod = -mod;
		}
		_putchar(mod + '0');
		auxCount--;
		i++;
	}

}
