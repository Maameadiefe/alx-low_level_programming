#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - this function will return the length of a string
 * @x: string to return its length
 * Return: length of string
 */

int _strlen(char *x)
{
	int a = 0;

	while (x[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - copies a string
 * @dest: pointer
 * @src: string to be copied
 * Return: NUll otherwise, to a pointer
 */

char* _strcpy(char *dest, char *src)
{
	int x, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - this function will create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lee, lee1;

	lee = _strlen(name);
	lee1 = _strlen(owner);

	dog = malloc(sizeof(char) * (lee + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lee1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
