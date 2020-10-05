#include "holberton.h"

/**
 * *_strspn - locates a character in a string
 *
 * @s: string to look into
 * @accept: character to look for
 *
 * Return: counter of ocurrences
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0, acount = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		acount = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}

		if (count == acount)
		{
			return (count);
		}
	}

	return (count);
}
