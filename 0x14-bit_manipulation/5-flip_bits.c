#include "holberton.h"

/**
 * flip_bits - gets the nth bit of a number
 * @n: number to convert
 * @m: bit to get
 * Return: 1 or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int base, aux;
	unsigned int count = 0;
	int i;

	base = n ^ m;
	for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
	{

		aux = base >> i;

		if (aux)
		{
			if (aux & 1)
			{
				count++;
			}
		}
	}
	return (count);
}
