#include "holberton.h"

/**
 * rev_string - returns a string backwards
 *
 * @s: string to be converted
 */

void rev_string(char *s)
{
	int size = 0, aux, i;
	char reversed[20];

	while (s[size] != '\0')
	{
		size++;
	}

	aux = size - 1;
	i = 0;

	while (aux >= 0)
	{
		reversed[i] = s[aux];
		i++;
		aux--;
	}

	reversed[i] = '\0';

	i = 0;

	while (s[i] != '\0')
	{
		s[i] = reversed[i];
		i++;
	}
}
