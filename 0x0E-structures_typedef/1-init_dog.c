#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this will initialize of type struct dog
 * @d: pointer to struct dog
 * @name: element in struct dog
 * @age: element in struct dog
 * @owner: element in struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
