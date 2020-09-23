#include "holberton.h"

/**
 * main - main function
 *
 * Return: On success 1.
 */

void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

	return;
}
