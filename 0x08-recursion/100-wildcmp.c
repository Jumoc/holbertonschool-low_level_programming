#include "holberton.h"

/**
 * wildcmp -  checks if a number is prime
 *
 * @s1: constant number to operate
 * @s2: aux of n to iterate
 *
 * Return: returns 1 if the mumber is prime 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{

	if (aux <= 0 || n <= 0)
	{
		if (count == 2)
			return (1);
		else
			return (0);
	}

	if (n % aux == 0)
	{
		count++;
	}

	return (is_prime_internal(n, aux - 1, count));
}
