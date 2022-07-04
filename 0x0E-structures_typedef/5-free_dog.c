#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: struct dog
 *
 * Return: no value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
