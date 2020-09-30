#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{

	int i, j, size, half;

	while (str[i] != '\0')
	{
		i++;
	}

	size = i;

	if (size % 2 == 0)
	{

		half =  size / 2;

	} else
	{

		half =  (size - 1) / 2;

	}

	for (j = half; j < size; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
