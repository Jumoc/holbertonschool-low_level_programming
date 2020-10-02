#include "holberton.h"

/**
 * *string_toupper - reverses an array of integers
 *
 * @c: pointer of the string
 *
 * Return: the proccesed string
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (i != 0)
		{
			if (c[i] == 'n' && c[i - 1] == '\\')
			{
				continue;
			}
		}

		if (c[i] <= 'z' && c[i] >= 'a')
		{
			c[i] = c[i] - ('a' - 'A');
		}
		i++;
	}
	return (c);
}
