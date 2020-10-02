#include "holberton.h"

/**
 * *_strncpy - copies N bytes of a string into another
 *
 * @dest: string that gets concatenated src
 * @src: string to be concatenated
 * @n: number of bytes to be copied
 *
 * Return: concatenated string
 */

int _strcmp(char *s1, char *s2)
{
	int lonS1 = 0, lonS2 = 0;

	while (s1[lonS1] != '\0')
		lonS1++;

	while (s2[lonS2] != '\0')
		lonS2++;

	while(*s1 != '\0' || *s2 != '\0')
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
