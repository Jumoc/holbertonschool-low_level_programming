#include "holberton.h"

/**
 * _strlen - returns the size of a string
 *
 * @s: string to be counted
 *
 * Return: the size of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int size = _strlen(str);
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
