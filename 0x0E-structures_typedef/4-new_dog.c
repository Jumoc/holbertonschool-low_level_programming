#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sizePtr - gets the size of a char pointer
 * @str: char pointer
 *
 * Return: size
 */
int sizePtr(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size + 1);
}

/**
 * new_dog - creates a new doggo
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int sizeName, sizeOwner, i;

	sizeName = sizePtr(name);
	sizeOwner = sizePtr(owner);

	dog = malloc(sizeof(dog_t));
	dog->age = age;
	dog->name = malloc(sizeName * sizeof(char));
	dog->owner = malloc(sizeOwner * sizeof(char));

	if (dog->name == NULL || dog == NULL || age < 0)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	} else if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < sizeName; i++)
	{
		dog->name[i] = name[i];
	}

	for (i = 0; i < sizeOwner; i++)
	{
		dog->owner[i] = owner[i];
	}

	return (dog);

}
