#include "holberton.h"

/**
 * _strlen - prints the size of a string
 *
 * @s: string to be counted
 *
 * Return: the size of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
