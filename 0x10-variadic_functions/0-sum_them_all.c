#include <stdarg.h>

/**
 * sum_them_all - check the code for Holberton School students.
 *
 * @n: size of args
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	return (sum);
}
