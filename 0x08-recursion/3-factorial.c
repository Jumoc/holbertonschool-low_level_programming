#include "holberton.h"

/**
 * factorial -  returns the factorial of a number
 *
 * @n: number to calculate its factorial
 * Return: the factorial of a number
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
