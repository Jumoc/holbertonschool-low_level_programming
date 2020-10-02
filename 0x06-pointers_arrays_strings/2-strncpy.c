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

char *_strncpy(char *dest, char *src, int n)
{
	char *first = dest;
	int lonD = 0, lonS = 0, i;

	while (dest[lonD] != '\0')
	{
		lonD++;
	}

	while (src[lonS] != '\0')
	{
		lonS++;
	}

	/*if (n > lonS)
	  n = lonD;*/

	for (i = 0 ; i < n ; i++)
	{
		if (i <= lonS)
		{
			*dest = *src;
			src++;
		} else
		{
			*dest = '\0';
		}

		dest++;
	}

	return (first);

}
