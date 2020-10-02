#include "holberton.h"

/**
 * *cap_string - capitalizes words of a string
 *
 * @s: string to be capitalized
 *
 * Return: the proccesed string
 */

char *cap_string(char *s)
{
	int size = 0, i = 0;

	while (s[size] != '\0')
		size++;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (i < size - 1)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
		   || s[i] == ',' || s[i] == ';' || s[i] == '.'
		   || s[i] == '!' || s[i] == '?' || s[i] == '\"'
		   || s[i] == '(' || s[i] == ')' || s[i] == '{'
		   || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}
	return (s);

}
