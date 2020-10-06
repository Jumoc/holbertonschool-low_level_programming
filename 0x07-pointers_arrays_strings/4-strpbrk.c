#include "holberton.h"

/**
 * *_strpbrk - locates a character in a string
 *
 * @s: string to look into
 * @accept: character to look for
 *
 * Return: counter of ocurrences
 */

char *_strpbrk(char *s, char *accept)
{
	char *init = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = init; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}

	return ('\0');
}
