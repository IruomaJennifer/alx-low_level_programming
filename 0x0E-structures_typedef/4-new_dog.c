#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - to get the length of a string
 * @s: a pointer to a character
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	len1 = _strlen(name);
	len2 = _strlen(owner);
	newdog->name = malloc(len1 + 1);
	newdog->owner = malloc(len2 + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < len2; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';


	return (newdog);
}

