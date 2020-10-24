#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @n: size of args
 * @separator: separator of the numbers
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
			string = "(nil)";

		if (separator != NULL && i != n - 1)
			printf("%s%s", string, separator);
		else
		       printf("%s", string);
	}
	printf("\n");

	va_end(args);
}
