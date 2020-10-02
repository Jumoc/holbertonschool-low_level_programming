#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: pointer of the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int reversed[100];
	int i, j;

	for (i = 0; i < n; i++)
		if (i != n - 1)
			a++;

	for (i = 0; i < n; i++)
	{
		reversed[i] = *a;
		if (i != n - 1)
			a--;
	}

	for (j = 0; j < n; j++)
	{
		*a = reversed[j];
		if (j != n - 1)
			a++;
	}
}
