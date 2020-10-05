#include "holberton.h"

/**
 * *_memset - fills the memory with a constant byte
 *
 * @s: string to be filled
 * @b: character used to fill
 * @n: size of s to be filled with b
 *
 * Return: s filled n times with b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
