#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file containing this function
 *
 * Return: 1 success
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
