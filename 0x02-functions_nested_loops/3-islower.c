#include "holberton.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 *
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
