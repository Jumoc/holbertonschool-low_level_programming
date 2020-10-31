#include <stdio.h>

void printBefore(void) __attribute__ ((constructor));

/**
 * printBefore - prints a string before the main function
 *
 * Return: void
 */
void printBefore(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
