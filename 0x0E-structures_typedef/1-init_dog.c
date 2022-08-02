#include "dog.h"
/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to struct to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

