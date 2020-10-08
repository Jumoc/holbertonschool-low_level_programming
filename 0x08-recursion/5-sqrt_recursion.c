#include "holberton.h"

/**
 * _sqrt_internal -  returns the natural square root of a number
 *
 * @n: constant number to operate
 * @aux: aux of n to iterate
 *
 * Return: the natural square root of n
 */

int _sqrt_internal(int n, int aux)
{

	if (aux <= 0)
	{
		return (-1);
	}

	if (aux * aux == n)
	{
		return (aux);
	}

	return (_sqrt_internal(n, aux - 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: number to calculate its square root
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	} else if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_internal(n, n));
}
