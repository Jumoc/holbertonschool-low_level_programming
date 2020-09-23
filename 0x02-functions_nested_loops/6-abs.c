#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
 * @n: number to be checked
 *
 * Return: 1 if positive -1 if negative and 0 if zero
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}

	return (n);

}
