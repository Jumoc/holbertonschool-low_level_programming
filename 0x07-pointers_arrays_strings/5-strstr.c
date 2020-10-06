#include "holberton.h"

/**
 * *_strstr - locates a character in a string
 *
 * @haystack: string to look into
 * @needle: character to look for
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
		if (count == nSize)
		{
			return (&haystack[index]);
		}

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
			}
			count = 0;
		}
	}

	if (count == nSize)
	{
		return (&haystack[index]);
	}

	return ('\0');
}
