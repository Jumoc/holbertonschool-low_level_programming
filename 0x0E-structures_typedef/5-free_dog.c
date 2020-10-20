#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees a someones doggo
 * @d: pointer to doggo structure
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && d->age >= 0 && d->owner != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
}
