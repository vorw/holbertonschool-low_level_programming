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
	dog_t *d;
	int i, name_len = 0, owner_len = 0;

	if (!name || !owner)
	{
		return (NULL);
	}
	while (name[name_len])
	{
		name_len++;
	}
	while (owner[owner_len])
	{
		owner_len++;
	}
	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (NULL);
	}
	d->name = malloc(name_len + 1);
	d->owner = malloc(owner_len + 1);

	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
	{
		d->name[i] = name[i];
	}
	for (i = 0; i <= owner_len; i++)
	{
		d->owner[i] = owner[i];
	}
	d->age = age;
	return (d);
}
