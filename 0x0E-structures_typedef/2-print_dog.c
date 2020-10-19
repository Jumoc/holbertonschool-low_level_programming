#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#define printNull (printf("(nil)\n"))


/**
 * print_dog - prints a doggo
 * @d: pointer to the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printNull;

		printf("Age: ");

		if ((d->age) >= 0)
			printf("%.6f\n", d->age);
		else
			printNull;

		printf("Age: ");

		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printNull;
	}
}
