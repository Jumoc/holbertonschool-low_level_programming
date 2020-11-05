#include "holberton.h"

/**
 * _strlen - function that obtain the length of buffer
 * @buffer: pointer contain digits
 * Return: size of buffer
 */
int _strlen(const char *buffer)
{
	int size = 0;

	while (buffer[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * binary_to_uint - converts a binary number to decimal
 * @b: string of binary
 * Return: converted base 10 number
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int sum = 0, aux = 1;
	int index = 0;

	if (b != NULL)
	{
		index = _strlen(b) - 1;
		while (index >= 0)
		{
			if (b[index] != '0' && b[index] != '1')
				return (0);
			sum += ((b[index] - '0') * aux);
			aux *= 2;
			index--;
		}
	}

	return (sum);
}
