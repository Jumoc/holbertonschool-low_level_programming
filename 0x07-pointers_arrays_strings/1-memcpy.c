#include "holberton.h"

/**
 * *_memcpy - copies n bytes from memory area from a string to another
 *
 * @dest: pointer to a string to be pasted
 * @src: pointer of copied string
 * @n: size of s to be filled with b
 *
 * Return: s filled n times with b
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
