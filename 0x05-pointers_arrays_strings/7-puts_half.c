#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int size = i;
	int half;

	if (size % 2 == 0)
	{

		half =  size / 2;

	} else
	{

		half =  (size - 1) / 2;

	}

	int j;

	for (j = half; j < size; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
