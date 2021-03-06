#include "holberton.h"

/**
 * clear_bit - gets the nth bit of a number
 * @n: number to convert
 * @index: bit to get
 * Return: 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	k = 1 << index;

	if (index >= 63)
		return (-1);

	k = ~k;
	*n &= k;

	return (1);
}
