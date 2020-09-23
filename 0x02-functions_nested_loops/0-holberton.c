#include "holberton.h"

/**
 * main - main function
 *
 * Return: On success 0.
 */

int main(void)
{
	char name[9] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
