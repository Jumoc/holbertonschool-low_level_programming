#include "holberton.h"
#include <stdio.h>
/**
 * set_string - set double pointer to another pointer
 *
 * @s: double pointer
 * @to: pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
