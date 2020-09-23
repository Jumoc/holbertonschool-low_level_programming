#include "holberton.h"

/**
 * _isalpha - checks if a character is alphabetic (lowercase or uppercase)
 * @c: character to be checked
 *
 * Return: 1 if alphabetic 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
