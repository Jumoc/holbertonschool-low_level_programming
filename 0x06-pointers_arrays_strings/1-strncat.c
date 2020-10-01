#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: string that gets concatenated src
 * @src: string to be concatenated
 * @n: number of bytes to be copied
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *first = dest;
	int longitud = 0, i;

	while (*dest != '\0')
	{
		dest++;
	}

	while (src[longitud] != '\0')
	{
		longitud++;
	}

	if (n > longitud)
		n = longitud;

	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (first);

}
