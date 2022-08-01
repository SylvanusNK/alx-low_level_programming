#include "dog.h"
#include <stdio.h>

/**
* main - creates a struc dog for name age and owner
* @name: pointer to name of the dog
* @age: age of dog
* @onwer: pointer to the gog owner
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
