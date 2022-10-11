#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - a function ...
 * @d: the pointeur of structure
 * @name: the char
 * @age: the int
 * @owner: the char
 *
 * Return: 1 or 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
