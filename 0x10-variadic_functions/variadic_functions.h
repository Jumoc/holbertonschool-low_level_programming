#ifndef VARIADIC_FUNCTIONS_C
#define VARIADIC_FUNCTIONS_C

#include <stdarg.h>

/**
 * struct print - struct to print any type of string
 *
 * @type: type of format
 * @f: function that prints
 *
 */
typedef struct print
{
	char type;
	void (*f)(va_list args);
} print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
