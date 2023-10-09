#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new type from structure dog
 * @d: new dog structure name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
