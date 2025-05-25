#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: name dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog_t, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i;

	if (!name || !owner)
	{
		return (NULL);
	}

	i = malloc(sizeof(dog_t));

	if (!i)
	{
		return (NULL);
	}

	i->name = malloc(strlen(name) + 1);

	if (!i->name)
	{
		free(i);
		return (NULL);
	}

	strcpy(i->name, name);
	i->owner = malloc(strlen(owner) + 1);

	if (!i->owner)
	{
		free(i->name);
		free(i);
		return (NULL);
	}

	strcpy(i->owner, owner);
	i->age = age;

	return (i);
}
