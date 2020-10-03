#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 *
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i = n;

	if (n == 98)
		return;

	while (i != 98)
	{
		if (i == n)
			printf("%d", i);

		if (i != 98)
			printf(", ");

		if (i > 98)
			i--;
		else
			i++;

		printf("%d", i);
	}

	printf("\n");
}
