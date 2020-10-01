#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: string that gets concatenated src
 * @src: string to be concatenated
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *first = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for ( ; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}

	return (first);

}
