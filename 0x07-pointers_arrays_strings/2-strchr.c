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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
