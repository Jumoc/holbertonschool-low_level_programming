#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - prints n numbers of an array
 *
 * @dest: string to be printed
 * @src: number of elements to be printed
 *
 * Return: The string copied
*/

char *_strcpy(char *dest, char *src)
{

	char *firstValue = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;

	}

	*dest = '\0';

	return (firstValue);
}
