#include "holberton.h"

/**
 * *_strpbrk - locates a character in a string
 *
 * @s: string to look into
 * @accept: character to look for
 *
 * Return: counter of ocurrences
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, count = 0, nSize = 0, index = 0;

	while (needle[nSize] != '\0')
	{
		nSize++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j + count])
			{
				if (count == 0)
				{
					index = i;
				}
				count++;
				break;
			} else 
			{
				count = 0;
			}
		}
	}

	if (count == nSize)
	{
		return (&haystack[index]);
	}

	return ('\0');
}
