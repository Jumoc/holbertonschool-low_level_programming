#include "variadic_functions.h"
#include <stdio.h>

void printC(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void printInt(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void printFloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

void printString(va_list arg)
{
	printf("%s", va_arg(arg, char *));
}

/**
 * prints anything - prints strings, followed by a new line.
 *
 * @format: size of args
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
