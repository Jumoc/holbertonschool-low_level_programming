#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{

	int result;

	result = (n % 10);

	if (n < 0)
	{
		result = ((n % -10) * -1);
	}

	_putchar(result + '0');

	return (result);
}
