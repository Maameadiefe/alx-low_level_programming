#include <stdlib.h>
#include "dog.h"
#include <stdio.h>


/**
 * _strlen - length of a string is returned
 * @x: string
 * Return: string length
 */

int _strlen(char *x)
{
	size_t lee = 0;

	while (*x++)
	{
		lee++;
	}
	return (lee);
}

/**
 * _strcpy - this function will duplicat string pointed by src
 * @dest: pointer to buffer
 * @src: string to be duplicated
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}

/**
 * new_dog - this function will make a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int lee, lee1;

	lee = _strlen(name);
	lee1 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (lee + 1));
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
