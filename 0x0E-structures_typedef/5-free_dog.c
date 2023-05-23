#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees mem allocated fron struct dog
 * @d: struct dog mem location to free
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

