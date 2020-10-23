#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 *
 * @n: size of args
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
                return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
                if (separator != NULL && i != n - 1)
                        printf("%d%s", va_arg(args, int), separator);
                else
                       printf("%d", va_arg(args, int)); 
	}
        printf("\n");

	va_end(args);
}
