#include "holberton.h"

/**
 * *_strcmp - compares two strings
 *
 * @s1: string that gets concatenated src
 * @s2: string to be concatenated
 *
 * Return: 0 if equal, positive if s2 > s1 negative otherwise
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
