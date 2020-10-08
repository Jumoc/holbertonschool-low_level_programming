#include "holberton.h"

/**
 * is_prime_internal -  checks if a number is prime
 *
 * @n: constant number to operate
 * @aux: aux of n to iterate
 * @count: count of divisors
 *
 * Return: returns 1 if the mumber is prime 0 otherwise
 */

int is_prime_internal(int n, int aux, int count)
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

/**
 * is_prime_number -  checks for a prime number
 *
 * @n: number to check if prime
 *
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_internal(n, n, 0));
}
