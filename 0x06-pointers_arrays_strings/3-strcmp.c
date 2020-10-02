#include "holberton.h"

/**
 * *_strcmp - compares two strings
 *
 * @s1: string that gets concatenated src
 * @s2: string to be concatenated
 *
 * Return: 0 if equal, positive if s2 > s1 negative otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int lonS1 = 0, lonS2 = 0;

	while (s1[lonS1] != '\0')
		lonS1++;

	while (s2[lonS2] != '\0')
		lonS2++;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
