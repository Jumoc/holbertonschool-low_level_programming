#include "holberton.h"

/**
 * print_binary - prints a decimal number to binary;
 * @n: number to convert
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

        k = 1 << index;

        if (index >= 63)
                return (-1);

        if ((n & k) != 0)
                return (1);
        else
                return (0);
}