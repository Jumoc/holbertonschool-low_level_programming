#include "variadic_functions.h"
#include <stdio.h>

/**
 * printC - prints strings, followed by a new line.
 *
 * @arg: list of arguments
 *
 * Return: void.
 */
void printC(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * printInt - prints strings, followed by a new line.
 *
 * @arg: list of arguments
 *
 * Return: void.
 */
void printInt(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * printFloat - prints strings, followed by a new line.
 *
 * @arg: list of arguments
 *
 * Return: void.
 */
void printFloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * printString - prints strings, followed by a new line.
 *
 * @arg: list of arguments
 *
 * Return: void.
 */
void printString(va_list arg)
{
	printf("%s", va_arg(arg, char *));
}

/**
 * print_all - prints strings, followed by a new line.
 *
 * @format: format to be printed
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;

	print arr[] = {
		{'c', printC},
		{'i', printInt},
		{'f', printFloat},
		{'s', printString}
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].type)
			{
				arr[j].f(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
