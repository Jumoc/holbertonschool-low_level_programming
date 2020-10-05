#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: string to look into
 * @c: character to look for
 *
 * Return: the fitst occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		i++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
