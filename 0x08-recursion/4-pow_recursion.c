#include "holberton.h"

/**
 * _pow_recursion -  returns the power y of x number
 *
 * @x: number to multitply
 * @y: power
 * Return: the factorial of a number
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
